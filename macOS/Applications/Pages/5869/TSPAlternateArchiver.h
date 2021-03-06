//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPArchiverBase.h"

#import "TSPKnownFieldRuleProvider-Protocol.h"

@class NSString;

@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider>
{
    RepeatedPtrField_5867f37b _fieldPathsToRemove;
    struct {
        unsigned int hasPreserveNewerValueRule:1;
        unsigned int hasPreserveNewerValueUntilModifiedRule:1;
    } _flags;
    BOOL _isDiff;
    const struct FieldPath *_fieldPath;
    unsigned long long _diffReadVersion;
    TSPArchiverBase *_parentArchiver;
}

@property(readonly, nonatomic) __weak TSPArchiverBase *parentArchiver; // @synthesize parentArchiver=_parentArchiver;
@property(readonly, nonatomic) unsigned long long diffReadVersion; // @synthesize diffReadVersion=_diffReadVersion;
@property(readonly, nonatomic) const struct FieldPath *fieldPath; // @synthesize fieldPath=_fieldPath;
@property(readonly, nonatomic) BOOL isDiff; // @synthesize isDiff=_isDiff;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateKnownFieldRulesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isContentUnknown;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 field:(int)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2;
- (id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3;
- (void)removeFieldAtEndOfPath:(int *)arg1;
- (void)removeField:(int)arg1;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2;
- (const struct FieldPath *)baseFieldPathAndReturnShouldDeleteReturnedValue:(char *)arg1;
@property(readonly, nonatomic) const RepeatedPtrField_5867f37b *fieldPathsToRemove;
- (void)dealloc;
- (id)initWithObject:(id)arg1 version:(unsigned long long)arg2 fieldPath:(const struct FieldPath *)arg3 isDiff:(BOOL)arg4 diffReadVersion:(unsigned long long)arg5 parentArchiver:(id)arg6;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

