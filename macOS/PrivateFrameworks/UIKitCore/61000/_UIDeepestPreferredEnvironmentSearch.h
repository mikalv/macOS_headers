//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIDeepestPreferredEnvironmentSearch : NSObject
{
    BOOL _allowsFocusRestoration;
    _UIDebugLogReport *_debugReport;
}

@property(retain, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property(nonatomic) BOOL allowsFocusRestoration; // @synthesize allowsFocusRestoration=_allowsFocusRestoration;
- (void).cxx_destruct;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;
- (void)_reportFoundFocusableItem:(id)arg1;
- (void)_reportSearchingEnvironment:(id)arg1;
- (void)_reportStartingSearch;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 inFocusSystem:(id)arg2;

@end

