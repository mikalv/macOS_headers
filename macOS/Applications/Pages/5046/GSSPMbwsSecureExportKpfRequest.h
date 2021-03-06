//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSString, TSKSecret;

@interface GSSPMbwsSecureExportKpfRequest : GSSPMessageBase <GSSPAutoDecodable>
{
    NSString *mSnapshotId;
    vector_e0f2bd7e mSegments;
    TSKSecret *mSecret;
    int mViewWidth;
    int mViewHeight;
    BOOL mDefinedViewWidth;
    BOOL mDefinedViewHeight;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedViewHeight; // @synthesize definedViewHeight=mDefinedViewHeight;
@property(readonly, nonatomic) BOOL definedViewWidth; // @synthesize definedViewWidth=mDefinedViewWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearViewHeight;
- (BOOL)clearViewWidth;
- (void)setViewHeight:(int)arg1;
- (int)viewHeight;
- (void)setViewWidth:(int)arg1;
- (int)viewWidth;
- (void)setSecret:(id)arg1;
- (id)secret;
- (void)setSegments:(const vector_e0f2bd7e *)arg1;
- (vector_e0f2bd7e *)segments;
- (void)setSnapshotId:(id)arg1;
- (id)snapshotId;

@end

