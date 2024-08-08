---
layout: post 
title: SRTP-anime-inbetweening
date: 2024-07-30 15:45:20
category: project
tags:
- inbetweening
description: Record for author's SRTP project.


---


[\[paper\]]({{ site.baseurl }}/homepage/assets/pdf/paper.pdf)
[\[presentation ppt\]]({{ site.baseurl }}/homepage/assets/pdf/基于机器学习的动漫中割-结题答辩.pptx)
[\[code(not furnished yet)\]](https://github.com/ManiacWallnut/AnimeInbetweening)

### Abstract

In simple terms, animation inbetweening is a kind of video interpolation for low-frame-rate 2D animation. Although there are many mature vdeo interpolation algorithms, they are all designed for videos with higher frame rate than 24fps, so they are not quite suitable for animation inbetweening works with large motion spans and frame rates usually lower than 12fps. In addition, these interpolation algorithms do not do a good job of preserving the outlines of the objects in the video, which is also required in actual animation inbetweening work. In this work, we propose a different interpolation method. Specifically, we use B-spline curves to fit the outlines of 2 input frames, and find the curves that have moved between the frames and then match them. After that, we predict the positions of the moving curves in the middle frame, and thus we obtain the middle frame composed of the unmoved curves and the predicted curves. Our algorithm can preserve the outlines of the middle frame during interpolation, and any number of mid-frames is supported.

<img src="{{ site.baseurl }}/assets/fancybox/test.gif" alt="Test GIF" width="500" height="400">




