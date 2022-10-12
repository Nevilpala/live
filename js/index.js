const section = document.getElementsByClassName('scroll-active');
const h_scroll = document.getElementsByClassName('h_scroll');
const element = document.getElementById('scroll-menu');




function clearactive(){
	for(let i=0;i<h_scroll.length;i++){
		h_scroll[i].classList.remove('active');
	}
}

element.onscroll = () => {
	for(let i=0;i<section.length;i++){

		const clientRect = section[i].getBoundingClientRect();
		const last = section[section.length-1];

		const lastRect = last.getBoundingClientRect();


		let vscroll = document.documentElement.scrollTop;

		let lastele = element.clientHeight - last.clientHeight;


		if(vscroll >= clientRect.top || (vscroll+lastele >= clientRect.top && i==section.length-1)){
			clearactive();
			h_scroll[i].classList.add('active');
		}

	}
}