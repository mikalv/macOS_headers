//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalContactsProviderProtocol-Protocol.h>

@class CNContactStore, CNReputationStore;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol>
{
    CNContactStore *_store;
    CNReputationStore *_reputationStore;
}

+ (BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;
+ (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;
+ (id)reputationForHandle:(id)arg1 inStore:(id)arg2;
+ (id)defaultProvider;
@property(retain) CNReputationStore *reputationStore; // @synthesize reputationStore=_reputationStore;
@property(retain) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1;
- (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1;
- (id)myFullName;
- (id)myNameWithStyle:(long long)arg1;
- (id)myShortDisplayName;
- (void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2;
- (id)myAvatarEncodedString;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;
- (id)_meWithKeys:(id)arg1;
- (void)meCardDidChange:(id)arg1;
- (void)contactDidChange:(id)arg1;
- (id)contactStore;
- (id)init;

@end

