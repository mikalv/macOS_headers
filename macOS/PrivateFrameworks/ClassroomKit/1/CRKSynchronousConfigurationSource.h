//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRKConfigurationSource;

@interface CRKSynchronousConfigurationSource : NSObject
{
    id <CRKConfigurationSource> mBaseSource;
}

- (void).cxx_destruct;
- (BOOL)setConfiguration:(id)arg1 error:(id *)arg2;
- (id)configurationWithError:(id *)arg1;
- (id)initWithConfigurationSource:(id)arg1;

@end

