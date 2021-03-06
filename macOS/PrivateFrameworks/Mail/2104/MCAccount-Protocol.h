//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class MCAuthScheme, MCConnection, MCError, NSArray, NSString, NSURL;

@protocol MCAccount <NSObject>
+ (void)saveAccountInfoToDefaults;
+ (NSString *)accountTypeString;
@property(readonly, copy) NSString *subscriptionURLLabel;
@property(readonly) NSURL *subscriptionURL;
@property BOOL usesSSL;
@property BOOL shouldUseAuthentication;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *googleClientToken;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *password;
@property(copy) NSString *username;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property long long securityLayerType;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property long long portNumber;
@property(copy) NSString *hostname;
@property(copy) NSString *canonicalEmailAddress;
@property BOOL allowInsecureAuthentication;
@property BOOL configureDynamically;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(copy) NSString *displayName;
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSString *accountTypeString;
- (BOOL)canAuthenticateWithScheme:(MCAuthScheme *)arg1;
- (MCConnection *)authenticatedConnection;
- (MCConnection *)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (void)respondToHostBecomingReachable;
- (BOOL)connectAndAuthenticate:(MCConnection *)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(MCError *)arg1 host:(NSString *)arg2 didPromptUser:(char *)arg3;
- (BOOL)autodiscoverSettings:(id *)arg1;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
- (void)setSessionPassword:(NSString *)arg1;
- (NSString *)sessionPassword;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;

@optional
@property(copy) NSString *externalHostname;
@end

