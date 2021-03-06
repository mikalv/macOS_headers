//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, NSURL;

@interface SUCatalogFetch : NSObject
{
    NSDictionary *_catalogDictionary;
    NSURL *_finalURL;
    NSString *_previousEntityTag;
    BOOL _skipIfUnchanged;
    NSString *_currentEntityTag;
    BOOL _didUseDefaultURL;
    BOOL _didUseAppleDefaultProductionURL;
    NSError *_error;
}

+ (BOOL)_isAppleSeedCatalogURL;
+ (BOOL)isUsingAppleSeedCatalogURL;
+ (id)defaultAppleCatalogURL;
+ (id)appleCatalogURL;
+ (id)catalogURL;
+ (id)priorProductionCatalogURLs;
- (id)error;
- (id)catalogEntityTag;
- (BOOL)isCatalogChanged;
- (BOOL)isAppleSeedCatalogURL;
- (BOOL)isDefaultAppleProductionCatalogURL;
- (BOOL)isDefaultAppleCatalogURL;
- (id)finalURL;
- (id)catalogDictionary;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 previousEntityTag:(id)arg2 skipIfUnchanged:(BOOL)arg3;
- (id)_fetchCatalogDictionaryReturningError:(id *)arg1 finalURL:(id *)arg2 isAppleDefault:(char *)arg3 isAppleProductionDefault:(char *)arg4 usingURL:(id)arg5;
- (id)_fetchAppleCatalogDictionaryReturningError:(id *)arg1 finalURL:(id *)arg2 isAppleProductionDefault:(char *)arg3;
- (BOOL)_isEVCheckDisabled;
- (id)_fetchDictionaryFromURL:(id)arg1 returningError:(id *)arg2;

@end

