//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSPersistentStore, NSString, PFUbiquityBaselineMetadata, PFUbiquityLocation, _PFZipFileArchive;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile
{
    PFUbiquityLocation *_baselineStagingLocation;
    PFUbiquityBaselineMetadata *_metadata;
    NSMutableDictionary *_storeFilenameToData;
    NSString *_storeFilename;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
    _PFZipFileArchive *_baselineArchive;
    NSPersistentStore *_store;
}

+ (id)createStringOfContentsOfBaselineFile:(id)arg1;
+ (id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id *)arg5;
+ (id)metadataFromBaselineArchive:(id)arg1;
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 withError:(id *)arg5;
+ (id)createModelFromBaselineModelWithModelVersionHash:(id)arg1 peerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createBaselineGCModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createBaselineOptimizedModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (BOOL)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2;
+ (BOOL)isPeerReceiptTooOld:(id)arg1;
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id *)arg5;
@property(readonly) NSPersistentStore *store; // @synthesize store=_store;
@property(readonly) _PFZipFileArchive *baselineArchive; // @synthesize baselineArchive=_baselineArchive;
@property(readonly) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
@property(readonly) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly) NSDictionary *storeFilenameToData; // @synthesize storeFilenameToData=_storeFilenameToData;
@property(readonly) NSString *storeFilename; // @synthesize storeFilename=_storeFilename;
@property(readonly) PFUbiquityBaselineMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) PFUbiquityLocation *baselineStagingLocation; // @synthesize baselineStagingLocation=_baselineStagingLocation;
- (void)setMetadata:(id)arg1;
- (BOOL)removeUnusedExternalDataReferences:(id *)arg1;
- (id)createSetOfInUseExternalDataRefUUIDs:(id *)arg1;
- (id)createManagedObjectModelFromCurrentBaseline;
- (id)createManagedObjectModel;
- (id)storeData;
- (id)gcModelData;
- (id)optimizedModelData;
- (id)baselineMetadataData;
- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(BOOL)arg1 error:(id *)arg2;
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id *)arg1;
- (BOOL)moveToPermanentLocation:(id *)arg1;
- (BOOL)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (BOOL)makeCurrentBaselineWithError:(id *)arg1;
- (BOOL)updateCurrentStoreIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id *)arg7;
- (BOOL)metadataMatchesCurrentMetadata:(id *)arg1;
- (BOOL)isUploaded:(id *)arg1;
- (BOOL)haveTransactionLogsForPeer:(id)arg1 between:(long long)arg2 and:(long long)arg3;
- (BOOL)canReplaceStoreAtKnowledgeVector:(id)arg1;
- (BOOL)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id *)arg5;
- (BOOL)unpackStoreFilesToStagingLocation:(id *)arg1;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (BOOL)constructBaselineArchive:(id *)arg1;
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)arg1;
- (BOOL)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id *)arg3;
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)arg1 andLocalPeerID:(id)arg2 error:(id *)arg3;
- (BOOL)clearOutStagingLocationWithError:(id *)arg1;
@property(readonly) PFUbiquityLocation *baselinePeerArchiveLocation;
@property(readonly) PFUbiquityLocation *baselineArchiveLocation;
- (id)description;
- (void)dealloc;
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;
- (id)init;

@end

