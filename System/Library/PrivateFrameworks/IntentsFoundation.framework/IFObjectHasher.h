/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IntentsFoundation/IntentsFoundation-Structs.h>
@interface IFObjectHasher : NSObject {

	SipHasher _hasher;
	unsigned long long _hash;
	BOOL _finalized;

}
-(unsigned long long)finalize;
-(id)combine:(id)arg1 ;
-(id)combineBool:(BOOL)arg1 ;
-(id)combineInteger:(unsigned long long)arg1 ;
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
-(id)combineContentsOfPropertyListObject:(id)arg1 ;
@end

