/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(id)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
@end
