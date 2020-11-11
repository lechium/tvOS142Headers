/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSError, NSMutableArray;

@interface _UIImageLoader : NSObject {

	atomic_flag _started;
	AB _finished;
	AB _cancelled;
	UIImage* _image;
	NSError* _error;
	os_unfair_lock_s _trampolineLock;
	NSMutableArray* _completionTrampolines;

}

@property (readonly) BOOL _isFinished; 
@property (readonly) BOOL _isCancelled; 
@property (readonly) UIImage * _image; 
@property (readonly) NSError * _error; 
+(id)_imageLoaderWithLoadingQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)_imageLoaderWithURLRequest:(id)arg1 session:(id)arg2 ;
+(id)_imageLoaderWithDataFromItemProvider:(id)arg1 typeIdentifier:(id)arg2 ;
-(id)init;
-(NSError *)_error;
-(BOOL)_isCancelled;
-(BOOL)_isFinished;
-(UIImage *)_image;
-(void)_cancel;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
-(BOOL)_really_cancel;
-(void)_loadImageWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

