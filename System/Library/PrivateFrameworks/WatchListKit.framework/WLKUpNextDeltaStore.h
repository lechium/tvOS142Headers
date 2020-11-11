/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface WLKUpNextDeltaStore : NSObject {

	NSURL* _fileURL;

}
+(id)sharedInstance;
-(id)init;
-(void)delete:(/*^block*/id)arg1 ;
-(id)_readDeltaFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeDelta:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)read:(/*^block*/id)arg1 ;
-(void)write:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)merge:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

