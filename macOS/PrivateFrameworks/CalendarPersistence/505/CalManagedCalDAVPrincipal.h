//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedPrincipal.h>

@class CalManagedCalDAVError, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSString, NSURL;

@interface CalManagedCalDAVPrincipal : CalManagedPrincipal
{
    NSDictionary *_pushTransportDictionary;
}

+ (id)principalInfoDictionaryForPrincipalWithPrincipalURL:(id)arg1;
+ (BOOL)isCalDAVPrincipalTitleClaimed:(id)arg1;
+ (Class)freeBusyCacheClass;
+ (id)predicateForExistingPrincipalWithPrincipalPath:(id)arg1;
+ (id)principalWithAccount:(id)arg1 principalPath:(id)arg2 inContext:(id)arg3;
+ (id)existingPrincipalWithPrincipalURL:(id)arg1 isDelegate:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)existingPrincipalsWithPrincipalPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pathExtension;
+ (id)entityName;
- (void).cxx_destruct;
- (BOOL)updateCachedAccountValues;
- (BOOL)supportsSharingScheduling;
- (BOOL)supportsEmailValidation;
- (id)typeString;
- (BOOL)hasLocalToServerMigrationGroup;
- (id)defaultSchedulingCalendar;
- (id)firstEventCalendar;
- (BOOL)isInboxAccessible;
- (BOOL)supportsPush;
- (id)constructNewCalendarPath;
- (void)clearETags;
- (BOOL)supportsTaskCalendarCreation;
- (BOOL)supportsManagedAttachments;
- (BOOL)supportsEventCalendarCreation;
- (BOOL)supportsDropBoxAttachments;
- (BOOL)supportsJunkReporting;
- (BOOL)supportsLikenessPropagation;
- (BOOL)supportsAttendeeComments;
- (BOOL)accountSupportsCalendarCreation:(BOOL)arg1;
- (BOOL)shouldDeepRefreshNow;
- (void)clearCTagsAndSyncTokens;
- (BOOL)hasSubscriptionCalendarWithID:(id)arg1 orURL:(id)arg2;
- (BOOL)isRemote;
- (id)type;
- (BOOL)validateForWrite:(id *)arg1;
- (id)properties;
@property(readonly) BOOL hasAttachmentCapability;
@property(readonly) NSString *principalURLString;
@property(readonly) NSURL *principalURL;
- (id)lastOperationError;
@property(retain) NSDictionary *pushTransportDictionary;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)awakeFromFetch;
- (BOOL)isColorEditable;
- (BOOL)isRenameable;
@property BOOL supportsPhoneNumbers; // @dynamic supportsPhoneNumbers;
@property BOOL isLikenessPropagationSupported; // @dynamic isLikenessPropagationSupported;
@property BOOL isPrivateCommentsSupported; // @dynamic isPrivateCommentsSupported;
@property BOOL isJunkReportingSupported; // @dynamic isJunkReportingSupported;
@property BOOL isCalendarServerPrivateEventsSupported; // @dynamic isCalendarServerPrivateEventsSupported;
@property BOOL isAutoScheduleSupported; // @dynamic isAutoScheduleSupported;
@property BOOL supportsUnbind;
@property BOOL supportsFreebusy;
- (id)description;
- (id)dropBoxPathString;
- (double)safeRefreshInterval;
- (id)session;
- (void)deactivateSession;
- (id)_addSourceForCalendar:(id)arg1 toSession:(id)arg2;
- (id)_makeSession;
- (void)activateSession;
- (BOOL)wantsSession;
- (void)getUserAvailabilityForEventID:(id)arg1 addresses:(id)arg2 timeRange:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)migrateETags:(id)arg1;
- (BOOL)changesAffectSession:(id)arg1;

// Remaining properties
@property(retain) NSString *allowedCalendarCreationTypes; // @dynamic allowedCalendarCreationTypes;
@property(retain) NSData *availabilityData; // @dynamic availabilityData;
@property(retain) NSString *calendarHomePath; // @dynamic calendarHomePath;
@property(retain) NSString *calendarHomePushKey; // @dynamic calendarHomePushKey;
@property(retain) NSString *defaultCalendarPath; // @dynamic defaultCalendarPath;
@property(retain) NSString *dropBoxPath; // @dynamic dropBoxPath;
@property(retain) NSString *homeCTag; // @dynamic homeCTag;
@property(retain) NSString *homeSyncToken; // @dynamic homeSyncToken;
@property(retain) NSString *inboxCTag; // @dynamic inboxCTag;
@property(retain) NSString *inboxPath; // @dynamic inboxPath;
@property(retain) NSString *inboxSyncToken; // @dynamic inboxSyncToken;
@property BOOL isCalendarProxySupported; // @dynamic isCalendarProxySupported;
@property BOOL isCalendarUserSearchReportSupported; // @dynamic isCalendarUserSearchReportSupported;
@property BOOL isCheckForValidEmailSupported; // @dynamic isCheckForValidEmailSupported;
@property BOOL isChecksummingSupported; // @dynamic isChecksummingSupported;
@property BOOL isExpandPropertyReportSupported; // @dynamic isExpandPropertyReportSupported;
@property BOOL isInboxAvailabilitySupported; // @dynamic isInboxAvailabilitySupported;
@property BOOL isManagedAttachmentSupported; // @dynamic isManagedAttachmentSupported;
@property BOOL isRequestCompressionSupported; // @dynamic isRequestCompressionSupported;
@property BOOL isSharingSchedulingSupported; // @dynamic isSharingSchedulingSupported;
@property BOOL isSharingSupported; // @dynamic isSharingSupported;
@property(retain) CalManagedCalDAVError *lastError; // @dynamic lastError;
@property(retain) NSDate *lastPushSubscription; // @dynamic lastPushSubscription;
@property(retain) NSDate *nextDeepRefresh; // @dynamic nextDeepRefresh;
@property(retain) NSString *notificationCollectionCTag; // @dynamic notificationCollectionCTag;
@property(retain) NSString *notificationCollectionPath; // @dynamic notificationCollectionPath;
@property(retain) NSString *notificationCollectionSyncToken; // @dynamic notificationCollectionSyncToken;
@property(retain) NSString *notificationURLString; // @dynamic notificationURLString;
@property(retain) NSString *outboxPath; // @dynamic outboxPath;
@property(retain) NSString *principalPath; // @dynamic principalPath;
@property(retain) NSData *pushTransports; // @dynamic pushTransports;
@property(retain) NSNumber *quotaFreeBytes; // @dynamic quotaFreeBytes;
@property(retain) NSMutableSet *searchPropertySet; // @dynamic searchPropertySet;
@property BOOL supportsCalendarHomeSync; // @dynamic supportsCalendarHomeSync;
@property BOOL supportsNotSerializingTimezones; // @dynamic supportsNotSerializingTimezones;
@property BOOL supportsRecurrenceSplitOnServer; // @dynamic supportsRecurrenceSplitOnServer;
@property BOOL supportsSubscriptionCalendars; // @dynamic supportsSubscriptionCalendars;

@end

