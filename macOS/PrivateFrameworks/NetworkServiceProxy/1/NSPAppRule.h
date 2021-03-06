//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkExtension/NEAppRule.h>

@class NSArray, NSDate, NSNumber, NSPNetworkAgent, NSString, NSUUID, NWNetworkAgentRegistration;

@interface NSPAppRule : NEAppRule
{
    BOOL _disabledByRatio;
    NSNumber *_disableFallback;
    NSNumber *_enableDirectMultipath;
    NSNumber *_enableDirectTFO;
    NSNumber *_enableDirectExtendedValidation;
    NSArray *_directTLSPorts;
    NSNumber *_divertDNSOnly;
    NSNumber *_noDNSDelegation;
    NSNumber *_serviceID;
    NSNumber *_enabled;
    NSNumber *_fallbackTimeout;
    NSNumber *_fallbackBufferLimit;
    NSNumber *_fallbackCountBeforeImmediateFallback;
    NSString *_proxyEvaluationPath;
    NSNumber *_useCustomProtocol;
    NSNumber *_useLocalFlowDivert;
    NSNumber *_enableDirectRace;
    NSString *_label;
    NSString *_edgeSetIdentifier;
    NSNumber *_connectionTimeout;
    NSNumber *_connectionIdleTimeout;
    NSNumber *_enableMultipath;
    NSNumber *_enableTFO;
    NSNumber *_requireTFO;
    NSNumber *_enableNoTFOCookie;
    NSNumber *_enableUDPRace;
    NSNumber *_enableRatio;
    NSNumber *_reenableInterval;
    NSNumber *_telemetryRatio;
    NSNumber *_shouldComposeInitialData;
    NSNumber *_enableOptInPerTask;
    NSArray *_matchEffectiveApplications;
    NSString *_locationBundlePath;
    NSNumber *_initialWindowSize;
    NSPAppRule *_defaults;
    NSPNetworkAgent *_agent;
    NWNetworkAgentRegistration *_agentRegistration;
    NSUUID *_configurationIdentifier;
    NSDate *_enableCheckDate;
}

+ (id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)loadAppRules:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)validateRuleDictionary:(id)arg1;
@property BOOL disabledByRatio; // @synthesize disabledByRatio=_disabledByRatio;
@property(retain) NSDate *enableCheckDate; // @synthesize enableCheckDate=_enableCheckDate;
@property(retain) NSUUID *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
@property(retain) NWNetworkAgentRegistration *agentRegistration; // @synthesize agentRegistration=_agentRegistration;
@property(retain) NSPNetworkAgent *agent; // @synthesize agent=_agent;
@property(retain) NSPAppRule *defaults; // @synthesize defaults=_defaults;
@property(copy) NSNumber *initialWindowSize; // @synthesize initialWindowSize=_initialWindowSize;
@property(copy) NSString *locationBundlePath; // @synthesize locationBundlePath=_locationBundlePath;
@property(copy) NSArray *matchEffectiveApplications; // @synthesize matchEffectiveApplications=_matchEffectiveApplications;
@property(copy) NSNumber *enableOptInPerTask; // @synthesize enableOptInPerTask=_enableOptInPerTask;
@property(copy) NSNumber *shouldComposeInitialData; // @synthesize shouldComposeInitialData=_shouldComposeInitialData;
@property(copy) NSNumber *telemetryRatio; // @synthesize telemetryRatio=_telemetryRatio;
@property(copy) NSNumber *reenableInterval; // @synthesize reenableInterval=_reenableInterval;
@property(copy) NSNumber *enableRatio; // @synthesize enableRatio=_enableRatio;
@property(copy) NSNumber *enableUDPRace; // @synthesize enableUDPRace=_enableUDPRace;
@property(copy) NSNumber *enableNoTFOCookie; // @synthesize enableNoTFOCookie=_enableNoTFOCookie;
@property(copy) NSNumber *requireTFO; // @synthesize requireTFO=_requireTFO;
@property(copy) NSNumber *enableTFO; // @synthesize enableTFO=_enableTFO;
@property(copy) NSNumber *enableMultipath; // @synthesize enableMultipath=_enableMultipath;
@property(copy) NSNumber *connectionIdleTimeout; // @synthesize connectionIdleTimeout=_connectionIdleTimeout;
@property(copy) NSNumber *connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(copy) NSString *edgeSetIdentifier; // @synthesize edgeSetIdentifier=_edgeSetIdentifier;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSNumber *enableDirectRace; // @synthesize enableDirectRace=_enableDirectRace;
@property(copy) NSNumber *useLocalFlowDivert; // @synthesize useLocalFlowDivert=_useLocalFlowDivert;
@property(copy) NSNumber *useCustomProtocol; // @synthesize useCustomProtocol=_useCustomProtocol;
@property(copy) NSString *proxyEvaluationPath; // @synthesize proxyEvaluationPath=_proxyEvaluationPath;
@property(copy) NSNumber *fallbackCountBeforeImmediateFallback; // @synthesize fallbackCountBeforeImmediateFallback=_fallbackCountBeforeImmediateFallback;
@property(copy) NSNumber *fallbackBufferLimit; // @synthesize fallbackBufferLimit=_fallbackBufferLimit;
@property(copy) NSNumber *fallbackTimeout; // @synthesize fallbackTimeout=_fallbackTimeout;
@property(copy) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(copy) NSNumber *serviceID; // @synthesize serviceID=_serviceID;
@property(copy) NSNumber *noDNSDelegation; // @synthesize noDNSDelegation=_noDNSDelegation;
@property(copy) NSNumber *divertDNSOnly; // @synthesize divertDNSOnly=_divertDNSOnly;
@property(copy) NSArray *directTLSPorts; // @synthesize directTLSPorts=_directTLSPorts;
@property(copy) NSNumber *enableDirectExtendedValidation; // @synthesize enableDirectExtendedValidation=_enableDirectExtendedValidation;
@property(copy) NSNumber *enableDirectTFO; // @synthesize enableDirectTFO=_enableDirectTFO;
@property(copy) NSNumber *enableDirectMultipath; // @synthesize enableDirectMultipath=_enableDirectMultipath;
@property(copy) NSNumber *disableFallback; // @synthesize disableFallback=_disableFallback;
- (void).cxx_destruct;
- (void)teardownNetworkAgent;
- (BOOL)updateNetworkAgent;
- (void)merge:(id)arg1;
- (id)copyTLVData;
- (id)initFromTLVs:(id)arg1;
- (id)copyMatchEffectiveApplicationConditions;
- (id)copyMatchDomainConditions;
- (id)copyAccountIdentifierConditions;
- (id)copyExecutableConditions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFromDictionary:(id)arg1;

@end

