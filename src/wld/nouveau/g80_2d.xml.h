#ifndef G80_2D_XML
#define G80_2D_XML

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

#define G80_2D_DMA_NOTIFY 0x00000180

#define G80_2D_DMA_DST 0x00000184

#define G80_2D_DMA_SRC 0x00000188

#define G80_2D_DMA_COND 0x0000018c

#define G80_2D_DST_FORMAT 0x00000200

#define G80_2D_DST_LINEAR 0x00000204

#define G80_2D_DST_TILE_MODE 0x00000208

#define G80_2D_DST_DEPTH 0x0000020c

#define G80_2D_DST_LAYER 0x00000210

#define G80_2D_DST_PITCH 0x00000214

#define G80_2D_DST_WIDTH 0x00000218

#define G80_2D_DST_HEIGHT 0x0000021c

#define G80_2D_DST_ADDRESS_HIGH 0x00000220

#define G80_2D_DST_ADDRESS_LOW 0x00000224

#define G80_2D_UNK228 0x00000228

#define GF100_2D_UNK228 0x00000228

#define GF100_2D_UNK22C 0x0000022c

#define G80_2D_SRC_FORMAT 0x00000230

#define G80_2D_SRC_LINEAR 0x00000234

#define G80_2D_SRC_TILE_MODE 0x00000238

#define G80_2D_SRC_DEPTH 0x0000023c

#define G80_2D_SRC_LAYER 0x00000240

#define GF100_2D_UNK0240 0x00000240

#define G80_2D_SRC_PITCH 0x00000244
#define G80_2D_SRC_PITCH__MAX 0x00040000

#define G80_2D_SRC_WIDTH 0x00000248
#define G80_2D_SRC_WIDTH__MAX 0x00010000

#define G80_2D_SRC_HEIGHT 0x0000024c
#define G80_2D_SRC_HEIGHT__MAX 0x00010000

#define G80_2D_SRC_ADDRESS_HIGH 0x00000250

#define G80_2D_SRC_ADDRESS_LOW 0x00000254

#define G80_2D_UNK258 0x00000258

#define GF100_2D_UNK25C 0x0000025c

#define G80_2D_UNK260 0x00000260

#define GF100_2D_SINGLE_GPC 0x00000260

#define G80_2D_COND_ADDRESS_HIGH 0x00000264

#define G80_2D_COND_ADDRESS_LOW 0x00000268

#define G80_2D_COND_MODE 0x0000026c
#define G80_2D_COND_MODE_NEVER 0x00000000
#define G80_2D_COND_MODE_ALWAYS 0x00000001
#define G80_2D_COND_MODE_RES_NON_ZERO 0x00000002
#define G80_2D_COND_MODE_EQUAL 0x00000003
#define G80_2D_COND_MODE_NOT_EQUAL 0x00000004

#define GF100_2D_UNK0270(i0) (0x00000270 + 0x4 * (i0))
#define GF100_2D_UNK0270__ESIZE 0x00000004
#define GF100_2D_UNK0270__LEN 0x00000004

#define G80_2D_CLIP_X 0x00000280

#define G80_2D_CLIP_Y 0x00000284

#define G80_2D_CLIP_W 0x00000288

#define G80_2D_CLIP_H 0x0000028c

#define G80_2D_CLIP_ENABLE 0x00000290

#define G80_2D_COLOR_KEY_FORMAT 0x00000294
#define G80_2D_COLOR_KEY_FORMAT_16BPP 0x00000000
#define G80_2D_COLOR_KEY_FORMAT_15BPP 0x00000001
#define G80_2D_COLOR_KEY_FORMAT_24BPP 0x00000002
#define G80_2D_COLOR_KEY_FORMAT_30BPP 0x00000003
#define G80_2D_COLOR_KEY_FORMAT_8BPP 0x00000004
#define G80_2D_COLOR_KEY_FORMAT_16BPP2 0x00000005
#define G80_2D_COLOR_KEY_FORMAT_32BPP 0x00000006

#define G80_2D_COLOR_KEY 0x00000298

#define G80_2D_COLOR_KEY_ENABLE 0x0000029c

#define G80_2D_ROP 0x000002a0

#define G80_2D_BETA1 0x000002a4
#define G80_2D_BETA1_BETA1__MASK 0x7f800000
#define G80_2D_BETA1_BETA1__SHIFT 23

#define G80_2D_BETA4 0x000002a8
#define G80_2D_BETA4_B__MASK 0x000000ff
#define G80_2D_BETA4_B__SHIFT 0
#define G80_2D_BETA4_G__MASK 0x0000ff00
#define G80_2D_BETA4_G__SHIFT 8
#define G80_2D_BETA4_R__MASK 0x00ff0000
#define G80_2D_BETA4_R__SHIFT 16
#define G80_2D_BETA4_A__MASK 0xff000000
#define G80_2D_BETA4_A__SHIFT 24

#define G80_2D_OPERATION 0x000002ac
#define G80_2D_OPERATION_SRCCOPY_AND 0x00000000
#define G80_2D_OPERATION_ROP_AND 0x00000001
#define G80_2D_OPERATION_BLEND 0x00000002
#define G80_2D_OPERATION_SRCCOPY 0x00000003
#define G80_2D_OPERATION_ROP 0x00000004
#define G80_2D_OPERATION_SRCCOPY_PREMULT 0x00000005
#define G80_2D_OPERATION_BLEND_PREMULT 0x00000006

#define G80_2D_PATTERN_OFFSET 0x000002b0
#define G80_2D_PATTERN_OFFSET_X__MASK 0x0000003f
#define G80_2D_PATTERN_OFFSET_X__SHIFT 0
#define G80_2D_PATTERN_OFFSET_Y__MASK 0x00003f00
#define G80_2D_PATTERN_OFFSET_Y__SHIFT 8

#define G80_2D_PATTERN_SELECT 0x000002b4
#define G80_2D_PATTERN_SELECT_BITMAP_8X8 0x00000000
#define G80_2D_PATTERN_SELECT_BITMAP_64X1 0x00000001
#define G80_2D_PATTERN_SELECT_BITMAP_1X64 0x00000002
#define G80_2D_PATTERN_SELECT_COLOR 0x00000003

#define GF100_2D_UNK02B8(i0) (0x000002b8 + 0x4 * (i0))
#define GF100_2D_UNK02B8__ESIZE 0x00000004
#define GF100_2D_UNK02B8__LEN 0x00000009

#define GF100_2D_UNK2DC 0x000002dc

#define GF100_2D_UNK2E0 0x000002e0

#define GF100_2D_UNK02E4 0x000002e4

#define G80_2D_PATTERN_COLOR_FORMAT 0x000002e8
#define G80_2D_PATTERN_COLOR_FORMAT_A16R5G6B5 0x00000000
#define G80_2D_PATTERN_COLOR_FORMAT_X16A1R5G5B5 0x00000001
#define G80_2D_PATTERN_COLOR_FORMAT_A8R8G8B8 0x00000002
#define G80_2D_PATTERN_COLOR_FORMAT_X16A8Y8 0x00000003
#define G80_2D_PATTERN_COLOR_FORMAT_UNK4 0x00000004
#define G80_2D_PATTERN_COLOR_FORMAT_UNK5 0x00000005

#define G80_2D_PATTERN_BITMAP_FORMAT 0x000002ec
#define G80_2D_PATTERN_BITMAP_FORMAT_CGA6 0x00000000
#define G80_2D_PATTERN_BITMAP_FORMAT_LE 0x00000001

#define G80_2D_PATTERN_BITMAP_COLOR(i0) (0x000002f0 + 0x4 * (i0))
#define G80_2D_PATTERN_BITMAP_COLOR__ESIZE 0x00000004
#define G80_2D_PATTERN_BITMAP_COLOR__LEN 0x00000002

#define G80_2D_PATTERN_BITMAP(i0) (0x000002f8 + 0x4 * (i0))
#define G80_2D_PATTERN_BITMAP__ESIZE 0x00000004
#define G80_2D_PATTERN_BITMAP__LEN 0x00000002

#define G80_2D_PATTERN_X8R8G8B8(i0) (0x00000300 + 0x4 * (i0))
#define G80_2D_PATTERN_X8R8G8B8__ESIZE 0x00000004
#define G80_2D_PATTERN_X8R8G8B8__LEN 0x00000040
#define G80_2D_PATTERN_X8R8G8B8_B__MASK 0x000000ff
#define G80_2D_PATTERN_X8R8G8B8_B__SHIFT 0
#define G80_2D_PATTERN_X8R8G8B8_G__MASK 0x0000ff00
#define G80_2D_PATTERN_X8R8G8B8_G__SHIFT 8
#define G80_2D_PATTERN_X8R8G8B8_R__MASK 0x00ff0000
#define G80_2D_PATTERN_X8R8G8B8_R__SHIFT 16

#define G80_2D_PATTERN_R5G6B5(i0) (0x00000400 + 0x4 * (i0))
#define G80_2D_PATTERN_R5G6B5__ESIZE 0x00000004
#define G80_2D_PATTERN_R5G6B5__LEN 0x00000020
#define G80_2D_PATTERN_R5G6B5_B0__MASK 0x0000001f
#define G80_2D_PATTERN_R5G6B5_B0__SHIFT 0
#define G80_2D_PATTERN_R5G6B5_G0__MASK 0x000007e0
#define G80_2D_PATTERN_R5G6B5_G0__SHIFT 5
#define G80_2D_PATTERN_R5G6B5_R0__MASK 0x0000f800
#define G80_2D_PATTERN_R5G6B5_R0__SHIFT 11
#define G80_2D_PATTERN_R5G6B5_B1__MASK 0x001f0000
#define G80_2D_PATTERN_R5G6B5_B1__SHIFT 16
#define G80_2D_PATTERN_R5G6B5_G1__MASK 0x07e00000
#define G80_2D_PATTERN_R5G6B5_G1__SHIFT 21
#define G80_2D_PATTERN_R5G6B5_R1__MASK 0xf8000000
#define G80_2D_PATTERN_R5G6B5_R1__SHIFT 27

#define G80_2D_PATTERN_X1R5G5B5(i0) (0x00000480 + 0x4 * (i0))
#define G80_2D_PATTERN_X1R5G5B5__ESIZE 0x00000004
#define G80_2D_PATTERN_X1R5G5B5__LEN 0x00000020
#define G80_2D_PATTERN_X1R5G5B5_B0__MASK 0x0000001f
#define G80_2D_PATTERN_X1R5G5B5_B0__SHIFT 0
#define G80_2D_PATTERN_X1R5G5B5_G0__MASK 0x000003e0
#define G80_2D_PATTERN_X1R5G5B5_G0__SHIFT 5
#define G80_2D_PATTERN_X1R5G5B5_R0__MASK 0x00007c00
#define G80_2D_PATTERN_X1R5G5B5_R0__SHIFT 10
#define G80_2D_PATTERN_X1R5G5B5_B1__MASK 0x001f0000
#define G80_2D_PATTERN_X1R5G5B5_B1__SHIFT 16
#define G80_2D_PATTERN_X1R5G5B5_G1__MASK 0x03e00000
#define G80_2D_PATTERN_X1R5G5B5_G1__SHIFT 21
#define G80_2D_PATTERN_X1R5G5B5_R1__MASK 0x7c000000
#define G80_2D_PATTERN_X1R5G5B5_R1__SHIFT 26

#define G80_2D_PATTERN_Y8(i0) (0x00000500 + 0x4 * (i0))
#define G80_2D_PATTERN_Y8__ESIZE 0x00000004
#define G80_2D_PATTERN_Y8__LEN 0x00000010
#define G80_2D_PATTERN_Y8_Y0__MASK 0x000000ff
#define G80_2D_PATTERN_Y8_Y0__SHIFT 0
#define G80_2D_PATTERN_Y8_Y1__MASK 0x0000ff00
#define G80_2D_PATTERN_Y8_Y1__SHIFT 8
#define G80_2D_PATTERN_Y8_Y2__MASK 0x00ff0000
#define G80_2D_PATTERN_Y8_Y2__SHIFT 16
#define G80_2D_PATTERN_Y8_Y3__MASK 0xff000000
#define G80_2D_PATTERN_Y8_Y3__SHIFT 24

#define GF100_2D_DRAW_COLOR_LONG(i0) (0x00000540 + 0x4 * (i0))
#define GF100_2D_DRAW_COLOR_LONG__ESIZE 0x00000004
#define GF100_2D_DRAW_COLOR_LONG__LEN 0x00000004

#define G80_2D_DRAW_SHAPE 0x00000580
#define G80_2D_DRAW_SHAPE_POINTS 0x00000000
#define G80_2D_DRAW_SHAPE_LINES 0x00000001
#define G80_2D_DRAW_SHAPE_LINE_STRIP 0x00000002
#define G80_2D_DRAW_SHAPE_TRIANGLES 0x00000003
#define G80_2D_DRAW_SHAPE_RECTANGLES 0x00000004

#define G80_2D_DRAW_COLOR_FORMAT 0x00000584

#define G80_2D_DRAW_COLOR 0x00000588

#define G80_2D_UNK58C 0x0000058c
#define G80_2D_UNK58C_0 0x00000001
#define G80_2D_UNK58C_1 0x00000010
#define G80_2D_UNK58C_2 0x00000100
#define G80_2D_UNK58C_3 0x00001000

#define G80_2D_DRAW_POINT16 0x000005e0
#define G80_2D_DRAW_POINT16_X__MASK 0x0000ffff
#define G80_2D_DRAW_POINT16_X__SHIFT 0
#define G80_2D_DRAW_POINT16_Y__MASK 0xffff0000
#define G80_2D_DRAW_POINT16_Y__SHIFT 16

#define G80_2D_DRAW_POINT32_X(i0) (0x00000600 + 0x8 * (i0))
#define G80_2D_DRAW_POINT32_X__ESIZE 0x00000008
#define G80_2D_DRAW_POINT32_X__LEN 0x00000040

#define G80_2D_DRAW_POINT32_Y(i0) (0x00000604 + 0x8 * (i0))
#define G80_2D_DRAW_POINT32_Y__ESIZE 0x00000008
#define G80_2D_DRAW_POINT32_Y__LEN 0x00000040

#define G80_2D_SIFC_BITMAP_ENABLE 0x00000800

#define G80_2D_SIFC_FORMAT 0x00000804

#define G80_2D_SIFC_BITMAP_FORMAT 0x00000808
#define G80_2D_SIFC_BITMAP_FORMAT_I1 0x00000000
#define G80_2D_SIFC_BITMAP_FORMAT_I4 0x00000001
#define G80_2D_SIFC_BITMAP_FORMAT_I8 0x00000002

#define G80_2D_SIFC_BITMAP_LSB_FIRST 0x0000080c

#define G80_2D_SIFC_BITMAP_LINE_PACK_MODE 0x00000810
#define G80_2D_SIFC_BITMAP_LINE_PACK_MODE_PACKED 0x00000000
#define G80_2D_SIFC_BITMAP_LINE_PACK_MODE_ALIGN_BYTE 0x00000001
#define G80_2D_SIFC_BITMAP_LINE_PACK_MODE_ALIGN_WORD 0x00000002

#define G80_2D_SIFC_BITMAP_COLOR_BIT0 0x00000814

#define G80_2D_SIFC_BITMAP_COLOR_BIT1 0x00000818

#define G80_2D_SIFC_BITMAP_WRITE_BIT0_ENABLE 0x0000081c

#define G80_2D_SIFC_WIDTH 0x00000838

#define G80_2D_SIFC_HEIGHT 0x0000083c

#define G80_2D_SIFC_DX_DU_FRACT 0x00000840

#define G80_2D_SIFC_DX_DU_INT 0x00000844

#define G80_2D_SIFC_DY_DV_FRACT 0x00000848

#define G80_2D_SIFC_DY_DV_INT 0x0000084c

#define G80_2D_SIFC_DST_X_FRACT 0x00000850

#define G80_2D_SIFC_DST_X_INT 0x00000854

#define G80_2D_SIFC_DST_Y_FRACT 0x00000858

#define G80_2D_SIFC_DST_Y_INT 0x0000085c

#define G80_2D_SIFC_DATA 0x00000860

#define G80_2D_UNK0870 0x00000870

#define G80_2D_UNK0880 0x00000880

#define G80_2D_UNK0884 0x00000884

#define G80_2D_UNK0888 0x00000888

#define G80_2D_BLIT_CONTROL 0x0000088c
#define G80_2D_BLIT_CONTROL_ORIGIN__MASK 0x00000001
#define G80_2D_BLIT_CONTROL_ORIGIN__SHIFT 0
#define G80_2D_BLIT_CONTROL_ORIGIN_CENTER 0x00000000
#define G80_2D_BLIT_CONTROL_ORIGIN_CORNER 0x00000001
#define G80_2D_BLIT_CONTROL_FILTER__MASK 0x00000010
#define G80_2D_BLIT_CONTROL_FILTER__SHIFT 4
#define G80_2D_BLIT_CONTROL_FILTER_POINT_SAMPLE 0x00000000
#define G80_2D_BLIT_CONTROL_FILTER_BILINEAR 0x00000010

#define G80_2D_BLIT_DST_X 0x000008b0

#define G80_2D_BLIT_DST_Y 0x000008b4

#define G80_2D_BLIT_DST_W 0x000008b8

#define G80_2D_BLIT_DST_H 0x000008bc

#define G80_2D_BLIT_DU_DX_FRACT 0x000008c0

#define G80_2D_BLIT_DU_DX_INT 0x000008c4

#define G80_2D_BLIT_DV_DY_FRACT 0x000008c8

#define G80_2D_BLIT_DV_DY_INT 0x000008cc

#define G80_2D_BLIT_SRC_X_FRACT 0x000008d0

#define G80_2D_BLIT_SRC_X_INT 0x000008d4

#define G80_2D_BLIT_SRC_Y_FRACT 0x000008d8

#define G80_2D_BLIT_SRC_Y_INT 0x000008dc

#define GF100_2D_FIRMWARE(i0) (0x000008e0 + 0x4 * (i0))
#define GF100_2D_FIRMWARE__ESIZE 0x00000004
#define GF100_2D_FIRMWARE__LEN 0x00000020

#endif /* G80_2D_XML */
