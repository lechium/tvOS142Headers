/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDDataStreamBulkSendListener;
@class NSString;

@interface HMDPendingBulkSendListener : NSObject {

	id<HMDDataStreamBulkSendListener> _listener;
	NSString* _fileType;

}

@property (assign,nonatomic,__weak) id<HMDDataStreamBulkSendListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSString * fileType;                                            //@synthesize fileType=_fileType - In the implementation block
-(NSString *)fileType;
-(id<HMDDataStreamBulkSendListener>)listener;
-(void)setListener:(id<HMDDataStreamBulkSendListener>)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithListener:(id)arg1 fileType:(id)arg2 ;
@end

