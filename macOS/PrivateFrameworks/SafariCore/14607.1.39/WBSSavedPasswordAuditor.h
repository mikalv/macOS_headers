//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSAutoFillQuirksManager, WBSSavedPasswordStore;

@interface WBSSavedPasswordAuditor : NSObject
{
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedPasswordStore *_savedPasswordStore;
}

- (void).cxx_destruct;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;
- (BOOL)savedPasswordIsReused:(id)arg1;
- (BOOL)passwordStoreHasDuplicatedPasswords;
- (BOOL)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2;
- (BOOL)_savedPasswordQualifiesForReuseAuditing:(id)arg1;
- (id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2;

@end

