#include "pin_tetris.h"

// duration is in microseconds
void play_one_note(float frequency, unsigned long duration) {
  unsigned long period = 1000000.0/frequency;

  for (unsigned int cycles=duration/period; cycles>0; cycles--) {
    // half the time on
    digitalWrite(PIEZO_PIN, HIGH);
    delayMicroseconds( period/2 );

    // half the time off
    digitalWrite(PIEZO_PIN, LOW);
    delayMicroseconds( period/2 );
  }

  // If the duration wasn't a multiple of the period, delay the remainder
  delayMicroseconds(duration % period);
}

// Time (in microseconds) to spend on each note while simulating polyphony
// If this is too small, low frequency notes will be inaudible.
#define POLY_DELTA (14400)

// duration is in microseconds
void play_two_notes(float freq1, float freq2, unsigned long duration) {
    for (unsigned long t=0; t<duration; t+=2*POLY_DELTA) {
      play_one_note(freq1, POLY_DELTA);
      play_one_note(freq2, POLY_DELTA);
    }
}

void play_tetris(){
  int curr_lead_note = 0;
  int curr_bass_note = 0;
  float curr_lead_note_time_remaining = lead_times[curr_lead_note];
  float curr_bass_note_time_remaining = bass_times[curr_bass_note];
  float lead_freq, bass_freq, note_value;
  unsigned long duration;

  while (curr_lead_note < lead_note_count && curr_bass_note < bass_note_count) {
    lead_freq = lead_notes[curr_lead_note];
    bass_freq = bass_notes[curr_bass_note];
    note_value = min(curr_lead_note_time_remaining, curr_bass_note_time_remaining);
    duration = note_value * 1000000 * (60.0/BPM);

    if (lead_freq > 0 && bass_freq > 0) {
      play_two_notes(lead_freq, bass_freq, duration);
    } else if (lead_freq > 0) {
      play_one_note(lead_freq, duration);
    } else if (bass_freq > 0) {
      play_one_note(bass_freq, duration);
    } else {
      delay( duration/1000 );
    }

    // Advance lead note
    curr_lead_note_time_remaining -= note_value;
    if (curr_lead_note_time_remaining < 0.001) {
      curr_lead_note++;
      curr_lead_note_time_remaining = lead_times[curr_lead_note];
    }

    // Advance bass note
    curr_bass_note_time_remaining -= note_value;
    if (curr_bass_note_time_remaining < 0.001) {
      curr_bass_note++;
      curr_bass_note_time_remaining = bass_times[curr_bass_note];
    }
  }
}

