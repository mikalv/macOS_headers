//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKPhoneNumber : NSObject
{
    NSString *_ISOCountryCode;
    NSString *_validatedString;
}

+ (id)defaultInternationalPrefix;
+ (id)internationalPrefixForCountry:(id)arg1;
+ (id)phoneNumberWithString:(id)arg1 country:(id)arg2;
+ (id)_strictPSTNCharacterSet;
+ (id)_illegalPSTNCharacterSet;
+ (id)_defaultISOCountryCode;
+ (void)setDefaultCountry:(id)arg1;
+ (id)ISOCountryCodeByParsingPhoneNumberString:(id)arg1;
+ (id)_internationalCallPrefixByScanningPhoneNumberString:(id)arg1;
+ (id)_validatedPSTNStringWithString:(id)arg1 country:(id)arg2;
+ (id)_cleanInitString:(id)arg1;
@property(retain, nonatomic) NSString *validatedString; // @synthesize validatedString=_validatedString;
@property(retain, nonatomic) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
- (void).cxx_destruct;
- (BOOL)isEmergencyPhoneNumber;
@property(readonly, nonatomic) NSString *internationalPrefix;
@property(readonly, nonatomic) NSString *stringValue;
- (id)description;
- (id)initWithString:(id)arg1 country:(id)arg2;

@end

