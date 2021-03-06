//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class CPLEngineTransport, CPLFeatureVersionHistory, CPLLibraryInfo, NSObject;
@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportGetLibraryInfoTask, CPLEngineTransportGroup, CPLEngineTransportQueryTask, OS_dispatch_queue;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask
{
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineTransport *_transport;
    struct NSData *_initialSyncAnchor;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    id <CPLEngineTransportQueryTask> _queryTask;
    id <CPLEngineTransportGetLibraryInfoTask> _getLibraryInfoTask;
    struct NSData *_lastKnownSyncAnchor;
    CPLLibraryInfo *_currentLibraryInfo;
    Class _currentQueryClass;
    BOOL _ignoreNewBatches;
    BOOL _useCourtesyMingling;
    unsigned long long _rewindFeatureVersion;
    struct NSData *_rewindSyncAnchor;
    CPLFeatureVersionHistory *_versionHistory;
    id <CPLEngineTransportGroup> _transportGroup;
    unsigned long long _totalAssetCountForScope;
    BOOL _hasCachedTotalAssetCountForScope;
    long long _taskItem;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_checkServerFeatureVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_launchPullTasksAndDisableQueries:(BOOL)arg1;
- (void)_launchNextQueryTask;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_launchFetchChangesFromSyncAnchor:(struct NSData *)arg1;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(struct NSData *)arg1;
- (void)_handleNewBatchFromChanges:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 newSyncAnchor:(struct NSData *)arg4;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(struct NSData *)arg2 inTransaction:(id)arg3;
- (unsigned long long)_totalAssetCountForScope;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (void)_cancelAllTasks;
- (id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4;

@end

