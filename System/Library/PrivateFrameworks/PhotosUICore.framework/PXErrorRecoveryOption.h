/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PXErrorRecoveryOption : NSObject {

	NSString* _title;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                    //@synthesize style=_style - In the implementation block
+(id)recoveryOptionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(long long)style;
-(id)handler;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_attemptRecoveryFromError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

