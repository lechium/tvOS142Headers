/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSHTTPCookieInternal.h>

@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal {

	CompactHTTPCookieWithData* _fromData;

}
-(id)init;
-(void)dealloc;
-(HTTPCookie*)_inner;
-(id)_initWithProperties:(id)arg1 fromString:(BOOL)arg2 ;
-(id)_initWithCookie:(id)arg1 partition:(id)arg2 ;
-(id)_initWithHeader:(const CompactCookieHeaderRef)arg1 ;
@end

