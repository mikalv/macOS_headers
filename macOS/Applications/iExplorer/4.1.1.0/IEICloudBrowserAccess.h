//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEFileSystemItem.h"

__attribute__((visibility("hidden")))
@interface IEICloudBrowserAccess : IEFileSystemItem
{
}

+ (id)sharedInstance;
- (id)navbarChildren;
- (BOOL)isTopMostType;
- (id)mountRelativePath;
- (BOOL)canBeRemoved;
- (id)navbarIcon;
- (id)displayImage;
- (BOOL)isCachedFileLoaded;
- (BOOL)isDirectory;
- (void)removeAccountFSI:(id)arg1;
- (void)setName:(id)arg1 forAccountFSI:(id)arg2;
- (id)addNewAccount;
- (id)initWithParent:(id)arg1;

@end

