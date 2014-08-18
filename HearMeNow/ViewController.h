//
//  ViewController.h
//  HearMeNow
//
//  Created by iboicenco on 8/18/14.
//  Copyright (c) 2014 iboicenco. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVAudioPlayerDelegate,AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;

@end
