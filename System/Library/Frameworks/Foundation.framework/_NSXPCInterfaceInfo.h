/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCInterfaceInfo : NSObject {

	unsigned long long _remoteVersion;
	os_unfair_lock_s _knownSelectorsLock;
	CFDictionaryRef _knownSelectors;
	CFDictionaryRef _methodInfo;
	Class _xpcDOSubclass;

}
-(id)init;
-(void)dealloc;
@end

