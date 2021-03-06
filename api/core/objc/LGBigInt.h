// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from big_int.djinni

#import <Foundation/Foundation.h>
@class LGBigInt;


/** Immutable class representing a potentially very long number */
@interface LGBigInt : NSObject

/**
 * Adds two BigInt and returns a new BigInt with the result.
 * @params i Value to be added to this BigInt
 * @return The result of this + i
 */
- (nullable LGBigInt *)add:(nullable LGBigInt *)i;

/**
 * Subtracts two BigInt and returns a new BigInt with result.
 * @params i Value to be subtracted to this BigInt
 * @return The result of this - i
 */
- (nullable LGBigInt *)subtract:(nullable LGBigInt *)i;

/**
 * Multiplies two BigInt and returns a new BigInt with result.
 * @params i Value to be multiplied by this BigInt
 * @return The result of this * i
 */
- (nullable LGBigInt *)multiply:(nullable LGBigInt *)i;

/**
 * Divides two BigInt and returns a new BigInt with result.
 * @params i Value by which this BigInt will be divided
 * @return The result of this / i
 */
- (nullable LGBigInt *)divide:(nullable LGBigInt *)i;

/**
 * Divides two BigInt and returns a new BigInt with result of the division and the remainder.
 * @params i Value by which this BigInteger is to be divided, and the remainder computed
 * @return A tuple of [this / i, this % i]
 */
- (nonnull NSArray<LGBigInt *> *)divideAndRemainder:(nullable LGBigInt *)i;

/**
 * Raises this BigInt with an interger value.
 * @params i The exponent to which thi BigInt is raised
 * @return The result of this ^ exponent
 */
- (nullable LGBigInt *)pow:(int32_t)exponent;

/**
 * Formats this BigInt to a decimal string (e.g. BigInt("12345").toDecimalString(1, ".", ",") => "1,234.5")
 * @params precision The power of ten by wich this BigInt is divided
 * @params decimalSeparator The separator to use between the integer part and the decimal part
 * @params thousandSeparator The separator to use between each group of thousand units
 * @return The BigInt formatted as a decimal string
 */
- (nonnull NSString *)toDecimalString:(int32_t)precision
                     decimalSeparator:(nonnull NSString *)decimalSeparator
                    thousandSeparator:(nonnull NSString *)thousandSeparator;

/**
 * Formats this BigInt to the interger representation of its internal value.
 * @params radix The radix of the number representation in which to format (right now 10 or 16)
 */
- (nonnull NSString *)toString:(int32_t)radix;

/**
 * Returns the int representation of this BigInt. Note that if the BigInt is greater than 4 bytes the returned value
 * will be meaningless.
 * @return The int representation of this BigInt
 */
- (int32_t)intValue;

/**
 * Compares two BigInt together.
 * @param i The value to compare with this BigInt
 * @return a positive value if this > i. A negative value if this < i. 0 if the two BigInts are equal
 */
- (int32_t)compare:(nullable LGBigInt *)i;

/**
 * Creates a BigInt with a decimal string (e.g. "1.2000"). Note that every non numeric characters (except the decimal separator)
 * are ignored (e.g. "1ledger000" will be equal to "1000")
 * @param s The string with the decimal representation of the BigInt
 * @param precision The power of ten by which your decimal number must be multiplied in order to get his integer representation
 * @params decimalSeparator The decimal separator used by this string representation
 * @return The created BigInt
 */
+ (nullable LGBigInt *)fromDecimalString:(nonnull NSString *)s
                               precision:(int32_t)precision
                        decimalSeparator:(nonnull NSString *)decimalSeparator;

/**
 * Creates a BigInt with an integer string expressed in hexadecimal or decimal radix.
 * @param s The string to parse
 * @param radix The radix of the number representation (right now 10 or 16)
 * @return The created BigInt
 */
+ (nullable LGBigInt *)fromIntegerString:(nonnull NSString *)s
                                   radix:(int32_t)radix;

/**
 * Creates a BigInt from a int64 value
 * @param l The value to convert
 * @return The created BigInt
 */
+ (nullable LGBigInt *)fromLong:(int64_t)l;

@end
