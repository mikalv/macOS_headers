//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PKInstallAnalyzer, PKInstallRequest;

@interface PKInstallManifest : NSObject
{
    PKInstallRequest *_installRequest;
    PKInstallAnalyzer *_installAnalyzer;
    NSDictionary *_defaultPathByBundleIdentifier;
    NSDictionary *_actualPathByBundleIdentifier;
    NSDictionary *_versionByBundleIdentifier;
    NSDictionary *_downgradePathByBundleIdentifier;
    NSArray *_topBundleIdentifiers;
    NSArray *_actualFileInstallPaths;
    NSArray *_actualInstallPathsForSystemContent;
}

- (void)_processAnalysis;
- (id)actualInstallPathsForSystemContent;
- (id)downgradePathForBundleIdentifier:(id)arg1;
- (id)installedVersionForBundleIdentifier:(id)arg1;
- (id)actualInstallPathForBundleIdentifier:(id)arg1;
- (id)defaultInstallPathForBundleIdentifier:(id)arg1;
- (id)topBundleIdentifiers;
- (id)bundleIdentifiers;
- (void)dealloc;
- (id)initWithInstallRequest:(id)arg1;

@end

