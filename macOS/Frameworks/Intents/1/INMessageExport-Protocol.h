//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INPerson, NSArray, NSDate, NSString;

@protocol INMessageExport <NSObject, JSExport>
@property(copy) NSArray *recipients;
@property(copy) INPerson *sender;
@property(copy) NSDate *dateSent;
@property(copy) NSString *content;
@property(copy) NSString *identifier;
- (id)init;
@end

