//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <PDFKit/PDFHostProtocol-Protocol.h>

@class NSString, PDFHostViewController;

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol>
{
    PDFHostViewController *_hostViewController;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak PDFHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (oneway void)extensionToHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

