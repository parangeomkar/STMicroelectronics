/*
 * File: untitled0_data.c
 *
 * Code generated for Simulink model 'untitled0'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Mar 29 16:11:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled0.h"

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Expression: [0.6087179621073490753957457854994572699069976806640625;-0.88219606576109388385020793066360056400299072265625;0.6827975132890895526571739537757821381092071533203125;-0.8385815071729634251340712580713443458080291748046875;-0.869041086680430563404797794646583497524261474609375;0.679542598123603180937379875103943049907684326171875;-0.96896573553997933370141026898636482656002044677734375;-0.4375406982859448845601946231909096240997314453125;1.246752560398995957058332351152785122394561767578125;-0.290033512479981270271167659302591346204280853271484375;0.508998053962444796383124412386678159236907958984375;0.1718070020298431421768015070483670569956302642822265625;-0.8289486848171299104848230854258872568607330322265625;0.84406291751314321825105935204192064702510833740234375;-0.630197029685124920916905466583557426929473876953125;-0.50108696343170056053395455819554626941680908203125;0.161833447893463377997846919242874719202518463134765625;-0.9652660164943844822715846021310426294803619384765625;0.256172038670352264499996408630977384746074676513671875;0.300613957589060676323100551599054597318172454833984375;0.45217702595477360372200337224057875573635101318359375;0.5983076080948321884278584548155777156352996826171875;0.1997608876179739478828878418426029384136199951171875;0.0071925666340175616053631557633707416243851184844970703125;0.57559189695199908243239406147040426731109619140625;-0.34394362557732005569732791627757251262664794921875;-0.9542125065600843836222111349343322217464447021484375;1.854556330017600895843088437686674296855926513671875;-0.51685029814152383398351275900495238602161407470703125;-2.059021337373859505959217131021432578563690185546875]
   * Referenced by: '<S8>/IW{1,1}(1,:)''
   */
  { 0.60871796210734908, -0.88219606576109388, 0.68279751328908955,
    -0.83858150717296343, -0.86904108668043056, 0.67954259812360318,
    -0.96896573553997933, -0.43754069828594488, 1.246752560398996,
    -0.29003351247998127, 0.5089980539624448, 0.17180700202984314,
    -0.82894868481712991, 0.84406291751314322, -0.63019702968512492,
    -0.50108696343170056, 0.16183344789346338, -0.96526601649438448,
    0.25617203867035226, 0.30061395758906068, 0.4521770259547736,
    0.59830760809483219, 0.19976088761797395, 0.0071925666340175616,
    0.57559189695199908, -0.34394362557732006, -0.95421250656008438,
    1.8545563300176009, -0.51685029814152383, -2.0590213373738595 },

  /* Expression: [7.71030834846512380664762531523592770099639892578125;-2.40669977978317461975166224874556064605712890625;-7.46422661463494563349740928970277309417724609375;7.20886904623241520084775402210652828216552734375;-1.084210891360893658230679648113436996936798095703125;-2.381350240388437011773703488870523869991302490234375;0.25413773099609870964599167564301751554012298583984375;-0.6370450967225578242647543447674252092838287353515625;-2.10983539645053586042422466562129557132720947265625;0.5041108879286391175611470316653139889240264892578125;-1.6073731541058808858224438154138624668121337890625;-1.2141041124453442190400664912885986268520355224609375;1.3051075785321117894710596374352462589740753173828125;-0.83442641661752203763313673334778286516666412353515625;1.9693149011281916305193817606777884066104888916015625;-5.04967598996194855232033660286106169223785400390625;1.056388483723986748685774728073738515377044677734375;0.0949790718687049395629884429581579752266407012939453125;-1.5944804351468684355808136388077400624752044677734375;-0.53285349779627466659803758375346660614013671875;1.38344496682334838766337270499207079410552978515625;-1.207356648321114445110424640006385743618011474609375;0.55638987971332631854437522633816115558147430419921875;0.24755099367343003091690434303018264472484588623046875;4.63454499830147970129701207042671740055084228515625;0.6706823356025981563988125344621948897838592529296875;-0.0874421978767054575154560325245256535708904266357421875;-1.202567781083925257945566045236773788928985595703125;0.69576811300773666602026423788629472255706787109375;-4.29410500357538982285632300772704184055328369140625]
   * Referenced by: '<S8>/IW{1,1}(10,:)''
   */
  { 7.7103083484651238, -2.4066997797831746, -7.4642266146349456,
    7.2088690462324152, -1.0842108913608937, -2.381350240388437,
    0.25413773099609871, -0.63704509672255782, -2.1098353964505359,
    0.50411088792863912, -1.6073731541058809, -1.2141041124453442,
    1.3051075785321118, -0.834426416617522, 1.9693149011281916,
    -5.0496759899619486, 1.0563884837239867, 0.09497907186870494,
    -1.5944804351468684, -0.53285349779627467, 1.3834449668233484,
    -1.2073566483211144, 0.55638987971332632, 0.24755099367343003,
    4.63454499830148, 0.67068233560259816, -0.087442197876705458,
    -1.2025677810839253, 0.69576811300773667, -4.29410500357539 },

  /* Expression: [0.695659610353405621907540989923290908336639404296875;1.487002072743607516969177595456130802631378173828125;-0.429006591031673101266363801187253557145595550537109375;-2.302407152435559378744756031665019690990447998046875;-0.714210196048999268469970047590322792530059814453125;-0.4670371947715816762780605131410993635654449462890625;-1.5707941151517281763716482601012103259563446044921875;-0.467255265226541371959001480718143284320831298828125;-0.88354683985621373931707012161496095359325408935546875;0.9061114267695293822413304951624013483524322509765625;-0.06135600172362554172167392607661895453929901123046875;0.08579597657796929344176106724262353964149951934814453125;-1.27157927307433649133372455253265798091888427734375;0.066798045448670240187283297927933745086193084716796875;-0.94833786134555542179924714218941517174243927001953125;-1.412689219938374929341762253898195922374725341796875;0.260723431971563501807764851037063635885715484619140625;-1.2904776357842988598889633067301474511623382568359375;0.6365917721051346234162338078022003173828125;-0.42791481463745151270217093042447231709957122802734375;2.3872000256222722924803747446276247501373291015625;-0.5502108656396600405713570580701343715190887451171875;0.4448616448076603280270546747487969696521759033203125;3.17098416703113006320791100733913481235504150390625;-2.137177313952064228175231619388796389102935791015625;-0.78385546442864317828735920556937344372272491455078125;1.7274866926165699521078522593597881495952606201171875;-1.07400262107725108506883771042339503765106201171875;-0.160831831776271749756546114440425299108028411865234375;-0.7039458256154438320351118818507529795169830322265625]
   * Referenced by: '<S8>/IW{1,1}(2,:)''
   */
  { 0.69565961035340562, 1.4870020727436075, -0.4290065910316731,
    -2.3024071524355594, -0.71421019604899927, -0.46703719477158168,
    -1.5707941151517282, -0.46725526522654137, -0.88354683985621374,
    0.90611142676952938, -0.061356001723625542, 0.0857959765779693,
    -1.2715792730743365, 0.06679804544867024, -0.94833786134555542,
    -1.4126892199383749, 0.2607234319715635, -1.2904776357842989,
    0.63659177210513462, -0.42791481463745151, 2.3872000256222723,
    -0.55021086563966, 0.44486164480766033, 3.17098416703113,
    -2.1371773139520642, -0.78385546442864318, 1.72748669261657,
    -1.0740026210772511, -0.16083183177627175, -0.70394582561544383 },

  /* Expression: [0.104195679421323017521672227303497493267059326171875;1.00642716537601728532536071725189685821533203125;-1.096839028738018750885885310708545148372650146484375;1.5214183336164956994451813443447463214397430419921875;0.01004386797292218524990659034301643259823322296142578125;-2.250123714423185372623947841930203139781951904296875;1.409310802078076019228092263801954686641693115234375;-0.278690080380692928319064094466739334166049957275390625;-0.42347545531911112703937760670669376850128173828125;-1.1288953768386436049553367411135695874691009521484375;-1.0916196372831346028675625348114408552646636962890625;1.4570962589385760832527694219606928527355194091796875;-0.9304921141957098740249421098269522190093994140625;-0.05559903180549630175022457478917203843593597412109375;0.1993145842497840991569546531536616384983062744140625;-1.1268097690366023488905966587481088936328887939453125;-0.145858602864150643796392614603973925113677978515625;0.249302378790649037387794351161574013531208038330078125;0.20105232135689643513387636630795896053314208984375;-0.68926003705617178152209589825361035764217376708984375;-0.103162527611069643196373135651811026036739349365234375;0.009340496752291725657268983695757924579083919525146484375;-0.372783410945382254197966176434420049190521240234375;1.1356129864109500982038980509969405829906463623046875;-1.5622139492125466375682663056068122386932373046875;1.0814949811167069437800591913401149213314056396484375;1.448231162320818388167253942810930311679840087890625;-2.669213234569468351509158310364000499248504638671875;2.271579197830448482164911183645017445087432861328125;1.0454053028636429711895061700488440692424774169921875]
   * Referenced by: '<S8>/IW{1,1}(3,:)''
   */
  { 0.10419567942132302, 1.0064271653760173, -1.0968390287380188,
    1.5214183336164957, 0.010043867972922185, -2.2501237144231854,
    1.409310802078076, -0.27869008038069293, -0.42347545531911113,
    -1.1288953768386436, -1.0916196372831346, 1.4570962589385761,
    -0.93049211419570987, -0.0555990318054963, 0.1993145842497841,
    -1.1268097690366023, -0.14585860286415064, 0.24930237879064904,
    0.20105232135689644, -0.68926003705617178, -0.10316252761106964,
    0.0093404967522917257, -0.37278341094538225, 1.13561298641095,
    -1.5622139492125466, 1.0814949811167069, 1.4482311623208184,
    -2.6692132345694684, 2.2715791978304485, 1.045405302863643 },

  /* Expression: [0.450895796839121343335676783681265078485012054443359375;0.09313345076232996955223342183671775273978710174560546875;-1.6826261145177985323329039601958356797695159912109375;-1.0667964145269157594242415143526159226894378662109375;-0.2675384707111170268234445757116191089153289794921875;0.10448251880392300794397897334420122206211090087890625;-0.051465369452702185160131165275743114762008190155029296875;0.375100896260949667748718638904392719268798828125;-0.67049964804003125973252963376580737531185150146484375;1.4252083101965171696434708792367018759250640869140625;-0.15391883793690419590660667381598614156246185302734375;-1.54344105024706390594246840919367969036102294921875;1.470790160671759050359241882688365876674652099609375;0.0002833908258164097304643291863612830638885498046875;-0.34872161334454110370728585621691308915615081787109375;0.0411889444109704572216656970340409316122531890869140625;0.764815282271538166014579473994672298431396484375;-0.611745031616969914267656349693424999713897705078125;0.71905725405492593171885573610779829323291778564453125;0.5581386268634143110745071680867113173007965087890625;0.2415222334300136386442403590990579687058925628662109375;1.6540839634873816255122846996528096497058868408203125;-0.1666816557709649149199293560741352848708629608154296875;-1.2101195769724231166009076332557015120983123779296875;3.7463625279232974918386389617808163166046142578125;-2.082550211360974845575810832087881863117218017578125;0.22768103364004577127133188696461729705333709716796875;2.030770755961857076954402145929634571075439453125;-2.56503930403753432898383834981359541416168212890625;-1.1894626952662950003514197305776178836822509765625]
   * Referenced by: '<S8>/IW{1,1}(4,:)''
   */
  { 0.45089579683912134, 0.09313345076232997, -1.6826261145177985,
    -1.0667964145269158, -0.267538470711117, 0.10448251880392301,
    -0.051465369452702185, 0.37510089626094967, -0.67049964804003126,
    1.4252083101965172, -0.1539188379369042, -1.5434410502470639,
    1.4707901606717591, 0.00028339082581640973, -0.3487216133445411,
    0.041188944410970457, 0.76481528227153817, -0.61174503161696991,
    0.71905725405492593, 0.55813862686341431, 0.24152223343001364,
    1.6540839634873816, -0.16668165577096491, -1.2101195769724231,
    3.7463625279232975, -2.0825502113609748, 0.22768103364004577,
    2.0307707559618571, -2.5650393040375343, -1.189462695266295 },

  /* Expression: [-0.03971959402828983964894860037020407617092132568359375;-0.66876808327786918528801152206142432987689971923828125;1.006269092274862497760068436036817729473114013671875;0.1882732124406139295746953621346619911491870880126953125;-0.1844338716097817243433354406079160980880260467529296875;0.5879151413240537582538536298670805990695953369140625;0.058370864353640861121874650052632205188274383544921875;-0.40537297054034004961664550137356854975223541259765625;0.70548930182906699482003887169412337243556976318359375;0.27799518975053294500554557089344598352909088134765625;-0.13346700868688687879881626940914429724216461181640625;0.5148851946673576041035857997485436499118804931640625;0.07697740774790913509395551272973534651100635528564453125;-0.31971264610814287276951972671668045222759246826171875;0.2439244474566807097115628266692510806024074554443359375;0.070065091467964857319117299994104541838169097900390625;-0.15943221529185180873611216156859882175922393798828125;-0.1690332656198695049365454678991227410733699798583984375;-0.4455615721068715284758354755467735230922698974609375;0.3539944704389383911546929084579460322856903076171875;-0.6358184659652617032321586520993150770664215087890625;-0.259030416475118041574887683964334428310394287109375;0.311999670048781541087379309828975237905979156494140625;-0.325132328570922946031629408025764860212802886962890625;-0.6060622961431521016351098296581767499446868896484375;0.700566894066025014353726874105632305145263671875;-1.033419391999407022098012021160684525966644287109375;0.1461214868314509029989523014592123217880725860595703125;0.76140524771781914470381025239476002752780914306640625;-0.166719617478950754563271630104281939566135406494140625]
   * Referenced by: '<S8>/IW{1,1}(5,:)''
   */
  { -0.03971959402828984, -0.66876808327786919, 1.0062690922748625,
    0.18827321244061393, -0.18443387160978172, 0.58791514132405376,
    0.058370864353640861, -0.40537297054034005, 0.705489301829067,
    0.27799518975053295, -0.13346700868688688, 0.5148851946673576,
    0.076977407747909135, -0.31971264610814287, 0.24392444745668071,
    0.070065091467964857, -0.15943221529185181, -0.1690332656198695,
    -0.44556157210687153, 0.35399447043893839, -0.6358184659652617,
    -0.25903041647511804, 0.31199967004878154, -0.32513232857092295,
    -0.6060622961431521, 0.700566894066025, -1.033419391999407,
    0.1461214868314509, 0.76140524771781914, -0.16671961747895075 },

  /* Expression: [0.860786254473989931312871703994460403919219970703125;-0.455686604925280847044888332675327546894550323486328125;-1.9812274327688346176046252367086708545684814453125;1.5580908046941985833910848668892867863178253173828125;-1.185271130597879807311301192385144531726837158203125;-1.3863806584354081419263593488722108304500579833984375;0.770858623174292656443640225916169583797454833984375;-0.36728978994737726537778144120238721370697021484375;-0.36715037541651707186929343151859939098358154296875;1.1436445944745334823977600535727106034755706787109375;-0.852873415750873054008707185857929289340972900390625;-0.4178544320751740315245115198194980621337890625;1.942132314604265275193029083311557769775390625;0.44508429772241608901595100178383290767669677734375;0.122478289750595881191230773765710182487964630126953125;1.5491256180801726838325294011156074702739715576171875;-0.53319098676051890350890971603803336620330810546875;0.76768777728574433272257238058955408632755279541015625;1.6365229064588715512940098051331005990505218505859375;-1.5477468495637805023790178893250413239002227783203125;1.0638707211573981137320288326009176671504974365234375;1.7051768999951437688622490895795635879039764404296875;-1.0306803737067677939620580218615941703319549560546875;-0.72929697395468651155425732213188894093036651611328125;2.837573901617288729681831682682968676090240478515625;-2.27279162965486225544964327127672731876373291015625;1.37170746612374028217118393513374030590057373046875;-0.21515192441538066869810563730425201356410980224609375;-3.46682157215601005617600094410590827465057373046875;0.8984341246243892076250858735875226557254791259765625]
   * Referenced by: '<S8>/IW{1,1}(6,:)''
   */
  { 0.86078625447398993, -0.45568660492528085, -1.9812274327688346,
    1.5580908046941986, -1.1852711305978798, -1.3863806584354081,
    0.77085862317429266, -0.36728978994737727, -0.36715037541651707,
    1.1436445944745335, -0.852873415750873, -0.41785443207517403,
    1.9421323146042653, 0.44508429772241609, 0.12247828975059588,
    1.5491256180801727, -0.5331909867605189, 0.76768777728574433,
    1.6365229064588716, -1.5477468495637805, 1.0638707211573981,
    1.7051768999951438, -1.0306803737067678, -0.72929697395468651,
    2.8375739016172887, -2.2727916296548623, 1.3717074661237403,
    -0.21515192441538067, -3.46682157215601, 0.89843412462438921 },

  /* Expression: [1.732876572352834987356118290335871279239654541015625;3.13433051725467226589216807042248547077178955078125;-3.384209287663056731076949290581978857517242431640625;1.152399975206785054382407906814478337764739990234375;-1.25846645893607433919214599882252514362335205078125;-3.1132836750375094680975962546654045581817626953125;1.4379214201330636768716431106440722942352294921875;-1.34686378603846268475763281458057463169097900390625;-1.104739822565407703081064028083346784114837646484375;3.24488595704802929020615920308046042919158935546875;-2.5874000593100401346191574702970683574676513671875;0.256113168414254854798883798139286227524280548095703125;0.77019467188266921287009836305514909327030181884765625;0.2995115892565352044840665257652290165424346923828125;-0.675550897580241116457955286023207008838653564453125;-2.617541765450263735459657254978083074092864990234375;0.221864727155031971062015827556024305522441864013671875;-0.332533566103823119419757858850061893463134765625;-0.9144597416134156997458148907753638923168182373046875;0.371610939634525461183756078753503970801830291748046875;0.51227999038024762956666791069437749683856964111328125;0.52463064907267409342495056989719159901142120361328125;0.948169654222372759733161728945560753345489501953125;0.60177545106283891751530745750642381608486175537109375;1.2584041910932930452560185585753060877323150634765625;-0.004381881886491356681290199048817157745361328125;0.1790441793893187416575329962142859585583209991455078125;0.1652581104496403663350889701177948154509067535400390625;-1.0408593441500766374474551412276923656463623046875;-0.574668861035264821879309238283894956111907958984375]
   * Referenced by: '<S8>/IW{1,1}(7,:)''
   */
  { 1.732876572352835, 3.1343305172546723, -3.3842092876630567,
    1.1523999752067851, -1.2584664589360743, -3.1132836750375095,
    1.4379214201330637, -1.3468637860384627, -1.1047398225654077,
    3.2448859570480293, -2.58740005931004, 0.25611316841425485,
    0.77019467188266921, 0.2995115892565352, -0.67555089758024112,
    -2.6175417654502637, 0.22186472715503197, -0.33253356610382312,
    -0.9144597416134157, 0.37161093963452546, 0.51227999038024763,
    0.52463064907267409, 0.94816965422237276, 0.60177545106283892,
    1.258404191093293, -0.0043818818864913567, 0.17904417938931874,
    0.16525811044964037, -1.0408593441500766, -0.57466886103526482 },

  /* Expression: [4.5512043887799134012084323330782353878021240234375;-13.3507135924256505887797175091691315174102783203125;14.0164343643664803806814234121702611446380615234375;3.9487247463816146364479209296405315399169921875;-13.1457859447806573172101707314141094684600830078125;6.8960480750851189668537699617445468902587890625;-4.18411582786424940394454097258858382701873779296875;-0.3733539480654233244649731204845011234283447265625;6.32589747694037374259323769365437328815460205078125;-9.1608670837433354705581223242916166782379150390625;-9.33207236256445327171604731120169162750244140625;-3.32856489909002828397888151812367141246795654296875;-6.7097759231814446678754393360577523708343505859375;4.533797987219134739689252455718815326690673828125;-6.25401353549213201432621644926257431507110595703125;2.70653685204113703122175138560123741626739501953125;2.051161587038472067234806672786362469196319580078125;2.9904826394518266852173837833106517791748046875;-2.62065371118485845869372496963478624820709228515625;3.64995658641905595942489526350982487201690673828125;-3.24934300810795573255518320365808904170989990234375;-5.2351237808947548302285213139839470386505126953125;1.3809427079727394360730841071926988661289215087890625;4.41708783518041769866613321937620639801025390625;8.639009719776566953441943041980266571044921875;-7.236890996529286468330610659904778003692626953125;-5.95281829238220172584306055796332657337188720703125;16.367993924114006887293726322241127490997314453125;-21.828865575980639590625287382863461971282958984375;8.9542983779116394060793027165345847606658935546875]
   * Referenced by: '<S8>/IW{1,1}(8,:)''
   */
  { 4.5512043887799134, -13.350713592425651, 14.01643436436648,
    3.9487247463816146, -13.145785944780657, 6.896048075085119,
    -4.1841158278642494, -0.37335394806542332, 6.3258974769403737,
    -9.1608670837433355, -9.3320723625644533, -3.3285648990900283,
    -6.7097759231814447, 4.5337979872191347, -6.254013535492132,
    2.706536852041137, 2.0511615870384721, 2.9904826394518267,
    -2.6206537111848585, 3.649956586419056, -3.2493430081079557,
    -5.2351237808947548, 1.3809427079727394, 4.4170878351804177,
    8.639009719776567, -7.2368909965292865, -5.9528182923822017,
    16.367993924114007, -21.82886557598064, 8.95429837791164 },

  /* Expression: [5.86004354739834010246113393804989755153656005859375;-5.76988551905394597696385972085408866405487060546875;2.482814964160296344886091901571489870548248291015625;10.2005364524019217498107536812312901020050048828125;1.4589598882618293185231550523894838988780975341796875;-0.21115856302228552809907569098868407309055328369140625;2.5532811852797436813489184714853763580322265625;0.225611208446696631657601983533822931349277496337890625;-0.5688648984625579441143372605438344180583953857421875;0.22370822683440305667090797214768826961517333984375;0.949320804869571599482469537178985774517059326171875;1.2860416740080802266987802795483730733394622802734375;6.07437053221948897174797821207903325557708740234375;-4.75934446557766221985730226151645183563232421875;4.13453874603130344667079043574631214141845703125;3.7073205657158467829503933899104595184326171875;-2.2068375132074233846424249350093305110931396484375;0.77589826139790296632980926005984656512737274169921875;0.8568649801270844523770620071445591747760772705078125;-0.090303968023688785393687794567085802555084228515625;-3.56584209807004537395869192550890147686004638671875;-1.34870888949798928280188192729838192462921142578125;-3.2324867185108132616733200848102569580078125;-1.630070432197828100839842591085471212863922119140625;-1.7629662134193260225600852209026925265789031982421875;0.96684380561749427851481186735327355563640594482421875;-0.927330381044449314487110314075835049152374267578125;-1.013496900532017352958291667164303362369537353515625;3.7768828967383516470590620883740484714508056640625;-5.70473954668027527503681994858197867870330810546875]
   * Referenced by: '<S8>/IW{1,1}(9,:)''
   */
  { 5.86004354739834, -5.769885519053946, 2.4828149641602963, 10.200536452401922,
    1.4589598882618293, -0.21115856302228553, 2.5532811852797437,
    0.22561120844669663, -0.56886489846255794, 0.22370822683440306,
    0.9493208048695716, 1.2860416740080802, 6.074370532219489,
    -4.7593444655776622, 4.1345387460313034, 3.7073205657158468,
    -2.2068375132074234, 0.775898261397903, 0.85686498012708445,
    -0.090303968023688785, -3.5658420980700454, -1.3487088894979893,
    -3.2324867185108133, -1.6300704321978281, -1.762966213419326,
    0.96684380561749428, -0.92733038104444931, -1.0134969005320174,
    3.7768828967383516, -5.7047395466802753 },

  /* Expression: [0.32218775395303145270275990696973167359828948974609375;-0.192488794355300196770031107007525861263275146484375;-0.64958664934397913892638598554185591638088226318359375;-0.44614651060304499896602692388114519417285919189453125;-0.59206469918513049410790927140624262392520904541015625;-0.411599329774351707644797215834842063486576080322265625;0.2300564246681467139854504466711659915745258331298828125;-0.031952470317098191632254611249663867056369781494140625;0.1882751104386535256907109214807860553264617919921875;0.6883777064934089029435426709824241697788238525390625]
   * Referenced by: '<S22>/IW{2,1}(1,:)''
   */
  { 0.32218775395303145, -0.1924887943553002, -0.64958664934397914,
    -0.446146510603045, -0.59206469918513049, -0.41159932977435171,
    0.23005642466814671, -0.031952470317098192, 0.18827511043865353,
    0.6883777064934089 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */