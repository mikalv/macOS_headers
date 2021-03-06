//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription
{
    float _priority;
    BOOL _exclusive;
    __NSURLSessionTaskDependencyResourceIdentifier *_dependent;
    __NSURLSessionTaskDependencyResourceIdentifier *_parent;
}

- (void)set_parent:(id)arg1;
- (id)_parent;
- (void)set_dependent:(id)arg1;
- (id)_dependent;
- (void)setExclusive:(BOOL)arg1;
- (BOOL)exclusive;
- (void)setPriority:(float)arg1;
- (float)priority;
- (id)description;
- (id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(BOOL)arg6;
- (void)dealloc;
- (id)initWithPriority:(float)arg1 exclusive:(BOOL)arg2;

@end

