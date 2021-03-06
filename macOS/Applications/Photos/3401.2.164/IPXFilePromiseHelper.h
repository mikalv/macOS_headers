//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFilePromiseProviderDelegate-Protocol.h"

@class IPXFilePromiseExportHelper, NSMutableSet, NSOperationQueue, NSString;

@interface IPXFilePromiseHelper : NSObject <NSFilePromiseProviderDelegate>
{
    NSOperationQueue *_exportOperationQueue;
    IPXFilePromiseExportHelper *_exportHelper;
    NSMutableSet *_existingExportedFilenames;
}

+ (BOOL)shouldDisableCompatibilityForModifierFlags:(unsigned long long)arg1;
+ (BOOL)shouldExportAsMasterForModifierFlags:(unsigned long long)arg1;
+ (id)_uniqueName:(id)arg1 forNamesInSet:(id)arg2;
@property(retain, nonatomic) NSMutableSet *existingExportedFilenames; // @synthesize existingExportedFilenames=_existingExportedFilenames;
@property(retain, nonatomic) IPXFilePromiseExportHelper *exportHelper; // @synthesize exportHelper=_exportHelper;
- (void).cxx_destruct;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)operationQueueForFilePromiseProvider:(id)arg1;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (void)_exportPerson:(id)arg1 toURL:(id)arg2 exportMasters:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exportMemory:(id)arg1 toURL:(id)arg2 exportMasters:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exportAlbum:(id)arg1 toURL:(id)arg2 exportMasters:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exportFolder:(id)arg1 toURL:(id)arg2 exportMasters:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exportVersions:(id)arg1 toURL:(id)arg2 exportMasters:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_masterOptionsForExportFile:(id)arg1;
- (id)_fileNameForExportFile:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *exportOperationQueue;
- (id)filePromiseProvidersForModel:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (id)collectionViewFilePromiseProviderForModel:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (id)_filePromiseProviderForExportFile:(id)arg1;
- (id)uniqueName:(id)arg1;
- (id)fileNameForModel:(id)arg1 exportAsMaster:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

