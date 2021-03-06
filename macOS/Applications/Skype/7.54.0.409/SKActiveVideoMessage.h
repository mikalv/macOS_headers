//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString;

@interface SKActiveVideoMessage : NSObject
{
    BOOL _screenRecordingVideoMessage;
    NSString *_currentlyComposingTitle;
    NSString *_currentlyComposingDescription;
}

@property(readonly, nonatomic, getter=isScreenRecordingVideoMessage) BOOL screenRecordingVideoMessage; // @synthesize screenRecordingVideoMessage=_screenRecordingVideoMessage;
@property(copy, nonatomic) NSString *currentlyComposingDescription; // @synthesize currentlyComposingDescription=_currentlyComposingDescription;
@property(copy, nonatomic) NSString *currentlyComposingTitle; // @synthesize currentlyComposingTitle=_currentlyComposingTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isStoppingRecording) BOOL stoppingRecording;
@property(readonly, nonatomic) __weak NSString *liveStatusString;
@property(readonly, nonatomic) NSError *recordingError;
@property(readonly, nonatomic) NSDate *recordingStartTime;
@property(readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property(readonly, nonatomic, getter=isScreenCapturing) BOOL screenCapturing;
@property(readonly, nonatomic, getter=isRecorded) BOOL recorded;
@property(readonly, nonatomic, getter=isRecording) BOOL recording;
@property(readonly, nonatomic, getter=isOpen) BOOL open;
- (void)teardownCapture;
- (void)preferredAudioDeviceChanged;
- (void)preferredVideoDeviceChanged;
- (void)didGoLiveNotification:(id)arg1;
- (BOOL)restartRecording;
- (void)stopRecording;
- (BOOL)startRecordingIncludeScreenRecording:(BOOL)arg1;
- (void)closeCaptureDevices;
- (BOOL)openCaptureDevices:(id *)arg1;
- (void)resetAnnotations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

