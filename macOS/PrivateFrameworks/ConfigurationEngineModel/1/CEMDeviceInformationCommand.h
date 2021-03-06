//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMDeviceInformationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)ErrorResponses_ErrorResponsesItem_allowedStatusKeys;
+ (id)ErrorResponses_allowedStatusKeys;
+ (id)QueryResponses_AutoSetupAdminAccountsItem_allowedStatusKeys;
+ (id)QueryResponses_OSUpdateSettings_allowedStatusKeys;
+ (id)QueryResponses_OrganizationInfo_allowedStatusKeys;
+ (id)QueryResponses_allowedStatusKeys;
+ (id)allowedStatusKeys;
+ (id)Queries_allowedPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayloadQueries:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validStatusErrorResponses_ErrorResponsesItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusErrorResponses_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_AutoSetupAdminAccountsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_OSUpdateSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_OrganizationInfo_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadQueries_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;
@property(readonly, nonatomic) NSArray *payloadQueries;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

