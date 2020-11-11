/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SVXSession;

@interface SVXSessionIdleAssertion : NSObject {

	unsigned long long _timestamp;
	SVXSession* _session;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SVXSession * session;                      //@synthesize session=_session - In the implementation block
-(id)description;
-(SVXSession *)session;
-(unsigned long long)timestamp;
-(id)initWithTimestamp:(unsigned long long)arg1 session:(id)arg2 ;
@end

