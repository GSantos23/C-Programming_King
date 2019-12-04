/* Does the following statement always compute the fractional part of f correctly
 * (assuming that f and frac_part are float variables)?
 *
 *  frac_part = f - (int) f;
 *
 * If not, what's the problem? */

/*
float = float - (int) float; --> Only if the value of f doesn't exceed the 
range of int.
*/