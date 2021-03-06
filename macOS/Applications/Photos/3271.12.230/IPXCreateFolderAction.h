//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCreateNamedModelInFolderAction.h"

@class RDUndoRedoChange;
@protocol IPXCreateFolderActionDelegate;

@interface IPXCreateFolderAction : IPXCreateNamedModelInFolderAction
{
    id <IPXCreateFolderActionDelegate> _delegate;
    RDUndoRedoChange *_folderTrashChange;
}

@property(retain, nonatomic) RDUndoRedoChange *folderTrashChange; // @synthesize folderTrashChange=_folderTrashChange;
@property __weak id <IPXCreateFolderActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)performUndo;
- (id)createdFolder;
- (id)createModelWithName:(id)arg1 parentFolder:(id)arg2;
- (id)defaultActionName;

@end

