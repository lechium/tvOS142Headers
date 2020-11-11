/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFSearchResultHandler
@optional
-(id)filter;
-(void)handleMessage:(id)arg1;
-(void)setResultSummary:(char*)arg1;

@required
-(void)beginResult:(unsigned)arg1;
-(void)setResultSubject:(char*)arg1;
-(void)setResultSender:(char*)arg1;
-(void)setResultDateRecieved:(double)arg1;
-(void)setResultUnread:(BOOL)arg1;
-(void)endResult;

@end
