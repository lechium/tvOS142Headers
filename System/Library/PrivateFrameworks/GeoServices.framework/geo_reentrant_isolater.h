/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface geo_reentrant_isolater : NSObject {

	char* _name;
	os_unfair_recursive_lock_s _lock;

}
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(id)initWithName:(const char*)arg1 ;
@end

