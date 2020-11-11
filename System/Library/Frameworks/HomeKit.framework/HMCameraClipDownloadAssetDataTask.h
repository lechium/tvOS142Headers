/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMCameraClipDownloadAssetDataTaskHandling;
#import <HomeKit/HomeKit-Structs.h>
@class NSMutableURLRequest;

@interface HMCameraClipDownloadAssetDataTask : NSObject {

	NSMutableURLRequest* _urlRequest;
	id<HMCameraClipDownloadAssetDataTaskHandling> _handler;

}

@property (readonly) NSMutableURLRequest * urlRequest;                                   //@synthesize urlRequest=_urlRequest - In the implementation block
@property (readonly) id<HMCameraClipDownloadAssetDataTaskHandling> handler;              //@synthesize handler=_handler - In the implementation block
-(id<HMCameraClipDownloadAssetDataTaskHandling>)handler;
-(NSMutableURLRequest *)urlRequest;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
-(id)downloadDataForByteRange:(NSRange)arg1 ;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3 ;
@end

