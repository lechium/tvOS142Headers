//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVCKDataClient, TVCKDataQuery, TVSiCloudAccountManager, UIView;

@interface TVPDataQueryController : UIViewController
{
    _Bool _showLaunchImageOnLoad;	// 8 = 0x8
    id _serverID;	// 16 = 0x10
    TVCKDataQuery *_dataQuery;	// 24 = 0x18
    unsigned long long _dataClientType;	// 32 = 0x20
    TVCKDataClient *_dataClient;	// 40 = 0x28
    TVCKDataQuery *_preDataQuery;	// 48 = 0x30
    TVCKDataQuery *_previewDataQuery;	// 56 = 0x38
    TVSiCloudAccountManager *_accountManager;	// 64 = 0x40
    UIView *_loadingView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002b0a8
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) TVCKDataQuery *previewDataQuery; // @synthesize previewDataQuery=_previewDataQuery;
@property(retain, nonatomic) TVCKDataQuery *preDataQuery; // @synthesize preDataQuery=_preDataQuery;
@property(retain, nonatomic) TVCKDataClient *dataClient; // @synthesize dataClient=_dataClient;
@property(nonatomic) unsigned long long dataClientType; // @synthesize dataClientType=_dataClientType;
@property(retain, nonatomic) TVCKDataQuery *dataQuery; // @synthesize dataQuery=_dataQuery;
@property(nonatomic) _Bool showLaunchImageOnLoad; // @synthesize showLaunchImageOnLoad=_showLaunchImageOnLoad;
@property(nonatomic) id serverID; // @synthesize serverID=_serverID;
- (void)previewQueryComplete:(id)arg1;	// IMP=0x000000010002af6c
- (void)dataQueryComplete:(id)arg1;	// IMP=0x000000010002af68
- (_Bool)updateWithDataClientNotification:(id)arg1;	// IMP=0x000000010002af60
- (void)dataClientConnectionFailed;	// IMP=0x000000010002af54
- (void)dataClientConnected;	// IMP=0x000000010002af50
- (id)newPreviewDataQuery;	// IMP=0x000000010002af48
- (id)newDataQuery;	// IMP=0x000000010002af40
- (_Bool)isQueryResultValid:(id)arg1;	// IMP=0x000000010002aeec
- (void)_removeLoadingView;	// IMP=0x000000010002aea0
- (void)_connectDataClient;	// IMP=0x000000010002ad84
- (void)_dataQueryComplete:(id)arg1;	// IMP=0x000000010002ad1c
- (void)setDataClientForUpdateNotifications;	// IMP=0x000000010002ac84
- (void)dataClientDataUpdated:(id)arg1;	// IMP=0x000000010002ac78
- (void)dataClientDidChangeStatus:(id)arg1;	// IMP=0x000000010002abbc
- (void)dataClientWillChangeStatus:(id)arg1;	// IMP=0x000000010002abb8
@property(readonly, nonatomic) _Bool isProcessingQuery;
- (void)executePreviewQuery;	// IMP=0x000000010002a9a0
- (void)executeDataQuery;	// IMP=0x000000010002a800
- (void)connectDataClient;	// IMP=0x000000010002a58c
- (void)showLoadingSpinnerView;	// IMP=0x000000010002a410
- (void)removePhotoStreamEmptyView;	// IMP=0x000000010002a2b0
- (void)displayPhotoStreamEmptyView;	// IMP=0x000000010002a188
- (void)dealloc;	// IMP=0x000000010002a110
- (id)initWithDataClient:(id)arg1 dataClientOfType:(unsigned long long)arg2;	// IMP=0x0000000100029fc4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100029f88

@end

