//
//  LocalPlaybackViewController.h
//  VideoPlayerDemo
//
//  Created by WangYinghao on 1/19/15.
//  Copyright (c) 2015 WangYinghao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@class PlayerView;

@interface PlayerViewController : UIViewController

@property (nonatomic) AVPlayer *player;
@property (nonatomic) AVPlayerItem *playerItem;
@property (weak, nonatomic) IBOutlet PlayerView *playerView;

@property (nonatomic,weak) IBOutlet UIButton * playButton;
- (IBAction)loadAssetFromFile:sender;
- (IBAction)loadAssetOnline:(id)sender;
- (IBAction)play:sender;
@property (weak, nonatomic) IBOutlet UIButton * pauseButton;
- (IBAction)pause:(id)sender;
- (void) syncUI;
@property (strong, nonatomic) IBOutlet UILabel *currentTimeLabel;
@property (strong, nonatomic) IBOutlet UILabel *totalTimeLabel;
@property (weak, nonatomic) IBOutlet UISlider *scrubberSlider;
@property (weak, nonatomic) IBOutlet UISlider *volumeSlider;
- (IBAction)setVolume:(id)sender;
- (IBAction)close:(id)sender;
@property (weak, nonatomic) IBOutlet UISwitch *switchforCC;
- (IBAction)switchChanged:(id)sender;


- (IBAction)scrubbingDidStart:(id)sender;

- (IBAction)scrubbing:(id)sender;

- (IBAction)scrubbingDidEnd:(id)sender;
@end