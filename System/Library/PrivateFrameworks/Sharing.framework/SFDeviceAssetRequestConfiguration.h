/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SFDeviceAssetRequestConfiguration : NSObject {

	/*^block*/id _queryResultHandler;
	double _timeout;
	/*^block*/id _downloadCompletionHandler;

}

@property (nonatomic,copy,readonly) id queryResultHandler;              //@synthesize queryResultHandler=_queryResultHandler - In the implementation block
@property (assign,nonatomic) double timeout;                            //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id downloadCompletionHandler;                //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
-(id)description;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)queryResultHandler;
-(id)downloadCompletionHandler;
-(id)initWithQueryResultHandler:(/*^block*/id)arg1 ;
-(void)setDownloadCompletionHandler:(id)arg1 ;
@end
