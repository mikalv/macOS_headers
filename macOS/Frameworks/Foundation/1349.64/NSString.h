//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithFormat:(id)arg1;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)string;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)pathWithComponents:(id)arg1;
+ (unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id *)arg3 usedLossyConversion:(char *)arg4;
+ (id)_scriptingTextWithDescriptor:(id)arg1;
+ (id)_scriptStringWithTabCount:(unsigned long long)arg1;
+ (id)_scriptStringWithPropertyAccess:(unsigned long long)arg1;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (const unsigned long long *)availableStringEncodings;
+ (unsigned long long)defaultCStringEncoding;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long *)arg2;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned long long *)arg4;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)getExternalRepresentation:(id *)arg1 extendedAttributes:(id *)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id *)arg5;
- (id)displayableString;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubstringsInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (void)getParagraphStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (void)_getBlockStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4 stopAtLineSeparators:(BOOL)arg5;
- (id)stringByApplyingTransform:(id)arg1 reverse:(BOOL)arg2;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (id)precomposedStringWithCompatibilityMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)precomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCanonicalMapping;
- (id)capitalizedStringWithLocale:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)capitalizedString;
- (id)lowercaseString;
- (id)uppercaseString;
- (BOOL)boolValue;
- (long long)integerValue;
- (long long)longLongValue;
- (int)intValue;
- (float)floatValue;
- (double)doubleValue;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (void)getCharacters:(unsigned short *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (struct _NSRange)localizedStandardRangeOfString:(id)arg1;
- (BOOL)localizedStandardContainsString:(id)arg1;
- (BOOL)localizedCaseInsensitiveContainsString:(id)arg1;
- (BOOL)containsString:(id)arg1;
- (BOOL)localizedHasSuffix:(id)arg1;
- (BOOL)localizedHasPrefix:(id)arg1;
- (BOOL)hasSuffix:(id)arg1;
- (BOOL)hasPrefix:(id)arg1;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)rangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (long long)localizedStandardCompare:(id)arg1;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)quotedStringRepresentation;
- (id)_stringRepresentation;
- (BOOL)_isCString;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short *)_fastCharacterContents;
- (id)init;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
- (id)variantFittingPresentationWidth:(long long)arg1;
- (BOOL)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (unsigned long long)_cfTypeID;
- (CDStruct_5fe7aead)decimalValue;
- (BOOL)_getBytesAsData:(id *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (id)_getCharactersAsStringInRange:(struct _NSRange)arg1;
- (id)__escapeString5991;
- (id)__oldnf_componentsSeparatedBySet:(id)arg1;
- (BOOL)__oldnf_containsCharFromSet:(id)arg1;
- (BOOL)__oldnf_containsChar:(BOOL)arg1;
- (BOOL)__oldnf_containsString:(id)arg1;
- (id)__oldnf_stringWithSeparator:(unsigned short)arg1 atFrequency:(long long)arg2;
- (void)__oldnf_copyToUnicharBuffer:(unsigned short **)arg1 saveLength:(long long *)arg2;
- (id)stringByConvertingURLToPath;
- (id)stringByConvertingPathToURL;
- (unsigned long long)completePathIntoString:(id *)arg1 caseSensitive:(BOOL)arg2 matchesIntoArray:(id *)arg3 filterTypes:(id)arg4;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (const char *)fileSystemRepresentation;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)stringByStandardizingPath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (id)stringByExpandingTildeInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)lastPathComponent;
- (BOOL)isAbsolutePath;
- (id)pathComponents;
- (BOOL)isNSString__;
- (id)_scriptingTextDescriptor;
- (int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1;
- (BOOL)isCaseInsensitiveLike:(id)arg1;
- (BOOL)isLike:(id)arg1;
- (BOOL)matchesPattern:(id)arg1;
- (BOOL)matchesPattern:(id)arg1 caseInsensitive:(BOOL)arg2;
- (BOOL)_matchesCharacter:(unsigned short)arg1;
- (id)_getBracketedStringFromBuffer:(struct _NSStringBuffer *)arg1 string:(id)arg2;
- (id)propertyListFromStringsFileFormat;
- (id)propertyList;
- (id)formatConfiguration;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (BOOL)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(BOOL)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (BOOL)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(BOOL)arg2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (const char *)lossyCString;
- (unsigned long long)cStringLength;
- (const char *)cString;
- (const char *)UTF8String;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_URLFragment;
- (BOOL)_web_isFileURL;
- (BOOL)_web_looksLikeAbsoluteURL;
- (struct _NSRange)_web_rangeOfURLHost;
- (struct _NSRange)_web_rangeOfURLUserPasswordHostPort;
- (id)_web_fixedCarbonPOSIXPath;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByTrimmingWhitespace;
- (id)_web_domainFromHost;
- (BOOL)_web_domainMatches:(id)arg1;
- (BOOL)_web_hasCountryCodeTLD;
- (BOOL)_web_looksLikeIPAddress;
- (long long)_web_countOfString:(id)arg1;
- (BOOL)_web_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (struct _NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange)_web_rangeOfURLScheme_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (id)_web_splitAtNonDateCommas_nowarn;
- (BOOL)scriptingContains:(id)arg1;
- (BOOL)scriptingEndsWith:(id)arg1;
- (BOOL)scriptingBeginsWith:(id)arg1;
- (BOOL)scriptingIsGreaterThan:(id)arg1;
- (BOOL)scriptingIsGreaterThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsLessThan:(id)arg1;
- (BOOL)scriptingIsLessThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsEqualTo:(id)arg1;
- (id)stringByAddingPercentEscapes;
- (id)stringByRemovingPercentEscapes;
- (id)standardizedURLPath;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
@property(readonly, copy) NSString *stringByRemovingPercentEncoding;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (id)stringMarkingUpcaseTransitionsWithDelimiter2:(id)arg1;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_HTTPStyleLanguageCode;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)linguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id *)arg5;
- (void)_flushRegularExpressionCaches;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (struct _NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)significantText;
- (id)replacementObjectForPortCoder:(id)arg1;
- (unsigned long long)__graphemeCount;

@end

