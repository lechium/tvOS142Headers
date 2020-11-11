/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AAUIServerHookResponse, RUIObjectModel;


@protocol AAUIServerHook <NSObject>
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (nonatomic,retain) RUIObjectModel * objectModel; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate; 
@optional
-(RUIObjectModel *)objectModel;
-(void)setObjectModel:(id)arg1;
-(void)harvestDataFromResponse:(id)arg1;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(id)arg1;

@required
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)shouldMatchElement:(id)arg1;
-(BOOL)shouldMatchModel:(id)arg1;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2;

@end

