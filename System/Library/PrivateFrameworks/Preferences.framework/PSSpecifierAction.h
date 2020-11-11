/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PSSpecifierAction : NSObject <NSCopying> {

	/*^block*/id _getter;
	/*^block*/id _setter;

}

@property (nonatomic,copy) id getter;              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,copy) id setter;              //@synthesize setter=_setter - In the implementation block
+(id)actionWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
+(id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3 ;
+(id)actionWithBoolDetailClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)getter;
-(id)setter;
-(void)setGetter:(id)arg1 ;
-(void)setSetter:(id)arg1 ;
@end

