/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSPortNameServer : NSObject
+(id)systemDefaultPortNameServer;
+(id)defaultPortNameServer;
-(BOOL)registerPort:(id)arg1 name:(id)arg2 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(id)portForName:(id)arg1 ;
-(BOOL)removePortForName:(id)arg1 ;
-(BOOL)registerPort:(id)arg1 forName:(id)arg2 ;
-(id)portForName:(id)arg1 onHost:(id)arg2 ;
@end

