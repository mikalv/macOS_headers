//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class NSMutableArray, RDUndoRedoGroupChange;

@interface IPXDuplicateProjectsAction : RDModelAction
{
    NSMutableArray *_duplicatedBundles;
    RDUndoRedoGroupChange *_undoGroup;
}

+ (id)_duplicateOrderedAlbums:(id)arg1 newAlbums:(id *)arg2;
- (void).cxx_destruct;
- (int)performUndo;
- (int)performAction;
- (id)defaultActionName;
- (id)initWithAlbums:(id)arg1;

@end

