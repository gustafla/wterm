#ifndef NV_OBJECT_XML
#define NV_OBJECT_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git
repository: http://github.com/envytools/envytools/ git clone
https://github.com/envytools/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/michael/src/envytools/rnndb/root.xml                      (    514
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/copyright.xml                 (   6452
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/nv_mmio.xml                   (   7175
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/nvchipsets.xml                (   2759
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/bus/pmc.xml                   (  11361
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/bus/pbus.xml                  (  19778
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/g80_defs.xml                  (  18175
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/g80_vm.xml             (   9832
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv_vga.xml            (  13101
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/bus/pci.xml                   (  17513
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/fifo/nv1_pfifo.xml            (  10542
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/fifo/nv4_pfifo.xml            (  24010
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/fifo/g80_pfifo.xml            (  23184
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/fifo/gf100_pfifo.xml          (  26735
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/gf100_vm.xml           (   8722
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/pm/nv40_pclock.xml            (   1166
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/pm/g80_pclock.xml             (  16434
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/pm/gt215_pclock.xml           (   4960
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/display/nv10_pvideo.xml       (   2468
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/bus/ptimer.xml                (   2285
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/nv10_pcounter.xml             (   5914
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/nv40_pcounter.xml             (   9663
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vpe/pmpeg.xml            (  12735
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vpe/pvpe.xml             (    703
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vpe/mpeg_fifo.xml        (   2614
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/fifo/nv_object.xml            (  15326
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vpe/pme.xml              (   5105
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/display/nv17_ptv.xml          (    457
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/io/pnvio.xml                  (  31893
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vpe/pvp1.xml             (   2108
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vp2/pvp2.xml             (   1615
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vp2/xtensa.xml           (   5390
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/pm/ptherm.xml                 (  34788
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/bus/pfuse.xml                 (   1158
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/bus/punits.xml                (   4661
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vp3/pvld.xml             (  13271
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/falcon.xml                    (  17092
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/falcon_crypt.xml              (   3446
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vp3/ppdec.xml            (  14150
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vp3/pppp.xml             (   8842
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/nv_defs.xml                   (   4399
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vp3/psec.xml             (    993
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/g84_punk089.xml               (    448
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv3_prmvio.xml        (    651
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/nv1_pdma.xml           (   5339
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/nv3_pfb.xml            (   4493
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/nv10_pfb.xml           (  18821
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/nv_pfb.xml             (   1135
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/g80_pfb.xml            (  11139
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/gf100_pffb.xml         (   2712
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/io/pstraps.xml                (   8118
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vp2/pcipher.xml          (   3572
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vp2/pbsp.xml             (  10610
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/fifo/pcopy.xml                (   7877
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/gt215_pcodec.xml      (    449
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/gt215_pkfuse.xml      (    448
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/pm/pdaemon.xml                (  19259
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/pm/10e000.xml                 (   1185
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/memory/gf100_pbfb.xml         (   3917
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/bus/pibus.xml                 (   8545
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/pm/gf100_pclock.xml           (   7338
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/memory/gf100_pp2p.xml         (   1949
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/gf100_pxbar.xml        (   1516
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/gf100_pmfb.xml         (   3646
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/gf100_pcounter.xml            (  12713
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/pvcomp.xml               (   8687
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/pvenc.xml                (   1416
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/display/gf119_punk1c3.xml     (    981
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/io/pmedia.xml                 (    432
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/nv1_paudio.xml                (   1862
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/extdev/ad1848.xml             (   5260
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv1_pgraph.xml          (  14207
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv1_2d.xml              (  36532
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv3_pgraph.xml          (   4004
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv4_pgraph.xml          (  11327
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_pgraph/pgraph.xml   (  31568
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_pgraph/tpc.xml      (   6832
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_pgraph/mpc.xml      (   6373
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_pgraph/mp.xml       (  16762
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/pgraph.xml (  26735
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/hw_blk.xml (    760
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/ctxctl.xml (  13155
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/gpc.xml    (  13114
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/tpc.xml    (  22154
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/ppc.xml    (   2131
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_pgraph/rop.xml    (   5134
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv3_pdma.xml            (   2290
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv1_pfb.xml           (   4030
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv3_pcrtc.xml         (   1108
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/memory/nv1_pram.xml           (   1235
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/io/pchipid.xml                (    493
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv1_pdac.xml          (   4628
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/io/peeprom.xml                (    702
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv3_pramdac.xml       (   4419
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/g80_pdisplay.xml      (  39075
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/bus/prm.xml                   (   5094
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/display/nv_evo.xml            (  10448
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/fifo/nv_objects.xml           (   1053
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv_m2mf.xml             (   2691
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_m2mf.xml          (   2783
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv4_dvd.xml             (   2994
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv3_3d.xml              (   5197
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv4_3d.xml              (  17716
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv_3ddefs.xml           (  16390
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv10_3d.xml             (  18416
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv20_3d.xml             (  21096
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/nv30-40_3d.xml          (  32451
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_2d.xml              (  11440
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_3d.xml              (  65900
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_compute.xml         (  14027
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_3d.xml            (  59845
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gk104_p2mf.xml          (   2376
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_compute.xml       (  11143
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gk104_compute.xml       (  10182
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vpe/me_fifo.xml          (   1685
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vpe/vp1_fifo.xml         (    670
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/vdec/vp2/cipher_fifo.xml      (   2071
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/fifo/gk104_copy.xml           (   3938
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/g80_texture.xml         (   8881
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/graph/gf100_shaders.xml       (   9244
bytes, from 2014-11-02 20:39:42)
- /home/michael/src/envytools/rnndb/vdec/vpe/mpeg_cmd.xml         (   7682
bytes, from 2014-11-02 20:39:43)
- /home/michael/src/envytools/rnndb/extdev/adt7473.xml            (  11411
bytes, from 2014-11-02 20:39:42)

Copyright (C) 2006-2014 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#define NV1_DMA_FROM_MEMORY 0x00000002
#define NV1_DMA_TO_MEMORY 0x00000003
#define NV1_NULL 0x00000030
#define NV3_DMA_IN_MEMORY 0x0000003d
#define NV1_OP_CLIP 0x00000010
#define NV1_OP_BLEND_AND 0x00000011
#define NV1_BETA 0x00000012
#define NV4_BETA4 0x00000072
#define NV1_OP_ROP_AND 0x00000013
#define NV1_ROP 0x00000014
#define NV3_ROP 0x00000043
#define NV1_OP_CHROMA 0x00000015
#define NV1_OP_PLANE_SWITCH 0x00000016
#define NV1_CHROMA 0x00000017
#define NV4_CHROMA 0x00000057
#define NV1_PATTERN 0x00000018
#define NV4_PATTERN 0x00000044
#define NV1_CLIP 0x00000019
#define NV1_OP_SRCCOPY_AND 0x00000064
#define NV3_OP_SRCCOPY 0x00000065
#define NV4_OP_SRCCOPY_PREMULT 0x00000066
#define NV4_OP_BLEND_PREMULT 0x00000067
#define NV1_POINT 0x0000001a
#define NV1_LINE 0x0000001b
#define NV1_LIN 0x0000001c
#define NV4_LIN 0x0000005c
#define NV30_LIN 0x0000035c
#define NV40_LIN 0x0000305c
#define NV1_TRI 0x0000001d
#define NV4_TRI 0x0000005d
#define NV1_RECT 0x0000001e
#define NV4_RECT 0x0000005e
#define NV1_BLIT 0x0000001f
#define NV4_BLIT 0x0000005f
#define NV15_BLIT 0x0000009f
#define NV1_IFM 0x00000020
#define NV1_IFC 0x00000021
#define NV4_IFC 0x00000061
#define NV5_IFC 0x00000065
#define NV10_IFC 0x0000008a
#define NV30_IFC 0x0000038a
#define NV40_IFC 0x0000308a
#define NV1_BITMAP 0x00000022
#define NV1_ITM 0x00000025
#define NV3_SIFC 0x00000036
#define NV4_SIFC 0x00000076
#define NV5_SIFC 0x00000066
#define NV30_SIFC 0x00000366
#define NV40_SIFC 0x00003066
#define NV3_SIFM 0x00000037
#define NV4_SIFM 0x00000077
#define NV5_SIFM 0x00000063
#define NV10_SIFM 0x00000089
#define NV30_SIFM 0x00000389
#define NV40_SIFM 0x00003089
#define G80_SIFM 0x00005089
#define NV3_GDI 0x0000004b
#define NV4_GDI 0x0000004a
#define NV4_SURFACE_SWZ 0x00000052
#define NV20_SURFACE_SWZ 0x0000009e
#define NV30_SURFACE_SWZ 0x0000039e
#define NV40_SURFACE_SWZ 0x0000309e
#define NV3_SURFACE_DST 0x00000058
#define NV3_SURFACE_SRC 0x00000059
#define NV4_SURFACE_2D 0x00000042
#define NV10_SURFACE_2D 0x00000062
#define NV30_SURFACE_2D 0x00000362
#define NV40_SURFACE_2D 0x00003062
#define G80_SURFACE_2D 0x00005062
#define NV4_INDEX 0x00000060
#define NV5_INDEX 0x00000064
#define NV30_INDEX 0x00000364
#define NV40_INDEX 0x00003064
#define NV10_TEXUPLOAD 0x0000007b
#define NV30_TEXUPLOAD 0x0000037b
#define NV40_TEXUPLOAD 0x0000307b
#define NV1_TEXLIN 0x00000023
#define NV1_TEXQUAD 0x00000024
#define NV1_TEXLINBETA 0x00000034
#define NV1_TEXQUADBETA 0x00000035
#define NV4_DVD_SUBPICTURE 0x00000038
#define NV10_DVD_SUBPICTURE 0x00000088
#define NV3_M2MF 0x00000039
#define G80_M2MF 0x00005039
#define GF100_M2MF 0x00009039
#define GK104_P2MF 0x0000a040
#define GK110_P2MF 0x0000a140
#define NV3_SURFACE_COLOR 0x0000005a
#define NV3_SURFACE_ZETA 0x0000005b
#define NV3_TEXTURED_TRIANGLE 0x00000048
#define NV4_TEXTURED_TRIANGLE 0x00000054
#define NV10_TEXTURED_TRIANGLE 0x00000094
#define NV4_SURFACE_3D 0x00000053
#define NV10_SURFACE_3D 0x00000093
#define NV4_MULTITEX_TRIANGLE 0x00000055
#define NV10_MULTITEX_TRIANGLE 0x00000095
#define NV10_3D 0x00000056
#define NV15_3D 0x00000096
#define NV11_3D 0x00000098
#define NV17_3D 0x00000099
#define NV20_3D 0x00000097
#define NV25_3D 0x00000597
#define NV30_3D 0x00000397
#define NV35_3D 0x00000497
#define NV34_3D 0x00000697
#define NV40_3D 0x00004097
#define NV44_3D 0x00004497
#define G80_3D 0x00005097
#define G84_3D 0x00008297
#define G200_3D 0x00008397
#define GT215_3D 0x00008597
#define MCP89_3D 0x00008697
#define GF100_3D 0x00009097
#define GF108_3D 0x00009197
#define GF110_3D 0x00009297
#define GK104_3D 0x0000a097
#define GK110_3D 0x0000a197
#define GK20A_3D 0x0000a297
#define GM107_3D 0x0000b097
#define G80_2D 0x0000502d
#define GF100_2D 0x0000902d
#define G80_COMPUTE 0x000050c0
#define GT215_COMPUTE 0x000085c0
#define GF100_COMPUTE 0x000090c0
#define GF110_COMPUTE 0x000091c0
#define GK104_COMPUTE 0x0000a0c0
#define GK110_COMPUTE 0x0000a1c0
#define GM107_COMPUTE 0x0000b0c0
#define G84_CIPHER 0x000074c1
#define GK104_COPY 0x0000a0b5
#define GM107_COPY 0x0000b0b5
#define NV31_MPEG 0x00003174
#define G84_MPEG 0x00008274
#define NV40_ME 0x00004075
#define NV41_VP1 0x00004176
#define SUBCHAN__SIZE 0x00008000
#define NV1_SUBCHAN 0x00000000

#define NV1_SUBCHAN_OBJECT 0x00000000

#define GF100_SUBCHAN_NOP 0x00000008

#define G84_SUBCHAN_SEMAPHORE_ADDRESS_HIGH 0x00000010

#define G84_SUBCHAN_SEMAPHORE_ADDRESS_LOW 0x00000014

#define G84_SUBCHAN_SEMAPHORE_SEQUENCE 0x00000018

#define G84_SUBCHAN_SEMAPHORE_TRIGGER 0x0000001c
#define G84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION__MASK 0x0000000f
#define G84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION__SHIFT 0
#define G84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_ACQUIRE_EQUAL 0x00000001
#define G84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_RELEASE 0x00000002
#define G84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_ACQUIRE_GEQUAL 0x00000004
#define GF100_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_ACQUIRE_MASK 0x00000008
#define GF100_SUBCHAN_SEMAPHORE_TRIGGER_YIELD 0x00001000
#define GF100_SUBCHAN_SEMAPHORE_TRIGGER_UNK20 0x00100000
#define GF100_SUBCHAN_SEMAPHORE_TRIGGER_SHORT 0x01000000

#define G84_SUBCHAN_NOTIFY_INTR 0x00000020

#define G84_SUBCHAN_WRCACHE_FLUSH 0x00000024

#define MCP89_SUBCHAN_UNK28 0x00000028

#define MCP89_SUBCHAN_UNK2C 0x0000002c
#define MCP89_SUBCHAN_UNK2C_UNK0__MASK 0x0fffffff
#define MCP89_SUBCHAN_UNK2C_UNK0__SHIFT 0
#define MCP89_SUBCHAN_UNK2C_UNK28 0x10000000
#define MCP89_SUBCHAN_UNK2C_UNK29__MASK 0xe0000000
#define MCP89_SUBCHAN_UNK2C_UNK29__SHIFT 29
#define MCP89_SUBCHAN_UNK2C_UNK29_UNK0 0x00000000
#define MCP89_SUBCHAN_UNK2C_UNK29_UNK1 0x20000000
#define MCP89_SUBCHAN_UNK2C_UNK29_UNK2 0x40000000

#define NV10_SUBCHAN_REF_CNT 0x00000050

#define NV1A_SUBCHAN_DMA_SEMAPHORE 0x00000060

#define NV1A_SUBCHAN_SEMAPHORE_OFFSET 0x00000064

#define NV1A_SUBCHAN_SEMAPHORE_ACQUIRE 0x00000068

#define NV1A_SUBCHAN_SEMAPHORE_RELEASE 0x0000006c

#define GF100_SUBCHAN_UNK70 0x00000070

#define GF100_SUBCHAN_UNK74 0x00000074

#define GF100_SUBCHAN_UNK78 0x00000078

#define GF100_SUBCHAN_UNK7C 0x0000007c

#define NV40_SUBCHAN_YIELD 0x00000080

#define NV1_GRAPH 0x00000000

#define NV4_GRAPH_NOP 0x00000100

#define NV4_GRAPH_NOTIFY 0x00000104
#define NV4_GRAPH_NOTIFY_WRITE 0x00000000
#define NV4_GRAPH_NOTIFY_WRITE_AND_AWAKEN 0x00000001

#define GF100_GRAPH_NOTIFY_ADDRESS_HIGH 0x00000104

#define GF100_GRAPH_NOTIFY_ADDRESS_LOW 0x00000108

#define GF100_GRAPH_NOTIFY 0x0000010c
#define GF100_GRAPH_NOTIFY_WRITE 0x00000000
#define GF100_GRAPH_NOTIFY_WRITE_AND_AWAKEN 0x00000001

#define G80_GRAPH_SERIALIZE 0x00000110

#define GF100_GRAPH_MACRO_CODE_POS 0x00000114

#define GF100_GRAPH_MACRO_CODE_DATA 0x00000118

#define GF100_GRAPH_MACRO_ENTRY_POS 0x0000011c

#define GF100_GRAPH_MACRO_ENTRY_DATA 0x00000120

#define GF100_GRAPH_MACRO_UNK0124 0x00000124

#define GT215_GRAPH_UNK0120 0x00000120

#define GT215_GRAPH_UNK0124 0x00000124

#define GF100_GRAPH_COND_MASTER_ADDRESS_HIGH 0x00000130

#define GF100_GRAPH_COND_MASTER_ADDRESS_LOW 0x00000134

#define GF100_GRAPH_COND_MASTER_MODE 0x00000138
#define GF100_GRAPH_COND_MASTER_MODE_NEVER 0x00000000
#define GF100_GRAPH_COND_MASTER_MODE_ALWAYS 0x00000001
#define GF100_GRAPH_COND_MASTER_MODE_RES_NON_ZERO 0x00000002
#define GF100_GRAPH_COND_MASTER_MODE_EQUAL 0x00000003
#define GF100_GRAPH_COND_MASTER_MODE_NOT_EQUAL 0x00000004

#define GF100_GRAPH_UNK013C 0x0000013c

#define NV40_GRAPH_PM_TRIGGER 0x00000140

#define GF100_GRAPH_UNK0150 0x00000150

#define GF100_GRAPH_UNK0154 0x00000154

#define GF100_GRAPH_SCRATCH(i0) (0x00003400 + 0x4 * (i0))
#define GF100_GRAPH_SCRATCH__ESIZE 0x00000004
#define GF100_GRAPH_SCRATCH__LEN 0x00000080

#define GF100_GRAPH_MACRO(i0) (0x00003800 + 0x8 * (i0))
#define GF100_GRAPH_MACRO__ESIZE 0x00000008
#define GF100_GRAPH_MACRO__LEN 0x00000080

#define GF100_GRAPH_MACRO_PARAM(i0) (0x00003804 + 0x8 * (i0))
#define GF100_GRAPH_MACRO_PARAM__ESIZE 0x00000008
#define GF100_GRAPH_MACRO_PARAM__LEN 0x00000080

#endif /* NV_OBJECT_XML */
