//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPPackageWriter.h"

@class TSUSafeSaveAssistant, TSUZipFileWriter;

@interface TSPFilePackageWriter : TSPPackageWriter
{
    TSUZipFileWriter *_delayedZipArchiveWriter;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    BOOL _onlyWriteToDelayedZipArchive;
}

- (void).cxx_destruct;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willWriteData:(id)arg1;
- (void)truncateZipAtFirstDeletedData:(id)arg1;
- (id)zipArchiveWriter;
- (id)componentZipArchiveWriter;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg5;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 apfsMode:(BOOL)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id *)arg14;

@end

