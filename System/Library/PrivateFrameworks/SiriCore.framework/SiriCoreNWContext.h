/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_context;
@class NSObject;

@interface SiriCoreNWContext : NSObject {

	NSObject*<OS_nw_context> _context;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)nwContext;
@end
