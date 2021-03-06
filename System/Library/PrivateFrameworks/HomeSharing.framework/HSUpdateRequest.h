/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest {

	long long _connectionType;

}
+(id)requestWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 ;
@end

